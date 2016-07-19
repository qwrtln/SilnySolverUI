#include <vector>
#include <algorithm>
#include <QCursor>

#include "inc/input.h"

template <typename T>
struct InputInstance : std::pair<T, Input::InputState>
{
  typedef std::pair<T, Input::InputState> base_class;
  inline InputInstance(T value) : base_class(value, Input::InputState::INVALID) {}
  inline InputInstance(T value, Input::InputState state) : base_class(value, state) {}
  inline bool operator==(const InputInstance &rhs) const
  {
    return this->first == rhs.first;
  }
};

//Instance types
typedef InputInstance<Qt::Key> KeyInstance;
typedef InputInstance<Qt::MouseButton> ButtonInstance;

//Container types
typedef std::vector<KeyInstance> KeyContainer;
typedef std::vector<ButtonInstance> ButtonContainer;

//Globals
static KeyContainer sg_keyInstances;
static ButtonContainer sg_buttonInstances;
static QPoint sg_mouseCurrPosition;
static QPoint sg_mousePrevPosition;
static QPoint sg_mouseDelta;

/////////////////////////////
///Static Helper Fucntions///
/////////////////////////////
static inline KeyContainer::iterator FindKey(Qt::Key value)
{
  return std::find(sg_keyInstances.begin(), sg_keyInstances.end(), value);
}

static inline ButtonContainer::iterator FindButton(Qt::MouseButton value)
{
  return std::find(sg_buttonInstances.begin(), sg_buttonInstances.end(), value);
}

template <typename TPair>
static inline void UpdateStates(TPair &instance)
{
  switch (instance.second)
  {
  case Input::InputState::REGISTERED:
    instance.second = Input::InputState::TRIGGERED;
    break;
  case Input::InputState::TRIGGERED:
    instance.second = Input::InputState::PRESSED;
    break;
  case Input::InputState::UNREGISTERED:
    instance.second = Input::InputState::RELEASED;
    break;
  default:
    break;
  }
}

template <typename TPair>
static inline bool CheckReleased(const TPair &instance)
{
  return instance.second == Input::InputState::RELEASED;
}

template <typename Container>
static inline void Update(Container &container)
{
  typedef typename Container::iterator Iter;
  typedef typename Container::value_type TPair;

  // Remove old data
  Iter remove = std::remove_if(container.begin(), container.end(), &CheckReleased<TPair>);
  container.erase(remove, container.end());

  // Update existing data
  std::for_each(container.begin(), container.end(), &UpdateStates<TPair>);
}

////////////////////////////
///Input Implementation ///
///////////////////////////
Input::InputState Input::keyState(Qt::Key k)
{
  KeyContainer::iterator it = FindKey(k);
  return (it != sg_keyInstances.end()) ? it->second : InputState::INVALID;
}

Input::InputState Input::buttonState(Qt::MouseButton k)
{
  ButtonContainer::iterator it = FindButton(k);
  return (it != sg_buttonInstances.end()) ? it->second : InputState::INVALID;
}

QPoint Input::mousePosition()
{
  return QCursor::pos();
}

QPoint Input::mouseDelta()
{
  return sg_mouseDelta;
}

void Input::update()
{
  // Update Mouse Delta
  sg_mousePrevPosition = sg_mouseCurrPosition;
  sg_mouseCurrPosition = QCursor::pos();
  sg_mouseDelta = sg_mouseCurrPosition - sg_mousePrevPosition;

  // Update KeyState values
  Update(sg_buttonInstances);
  Update(sg_keyInstances);
}

void Input::registerKeyPress(int k)
{
  KeyContainer::iterator it = FindKey((Qt::Key)k);
  if (it == sg_keyInstances.end())
  {
    sg_keyInstances.push_back(KeyInstance((Qt::Key)k, InputState::REGISTERED));
  }
}

void Input::registerKeyRelease(int k)
{
  KeyContainer::iterator it = FindKey((Qt::Key)k);
  if (it != sg_keyInstances.end())
  {
    it->second = InputState::UNREGISTERED;
  }
}

void Input::registerMousePress(Qt::MouseButton btn)
{
  ButtonContainer::iterator it = FindButton(btn);
  if (it == sg_buttonInstances.end())
  {
    sg_buttonInstances.push_back(ButtonInstance(btn, InputState::REGISTERED));
  }
}

void Input::registerMouseRelease(Qt::MouseButton btn)
{
  ButtonContainer::iterator it = FindButton(btn);
  if (it != sg_buttonInstances.end())
  {
    it->second = InputState::UNREGISTERED;
  }
}

void Input::reset()
{
  sg_keyInstances.clear();
  sg_buttonInstances.clear();
}

