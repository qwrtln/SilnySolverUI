#ifndef INPUT_H
#define INPUT_H

#include <Qt>
#include <QPoint>


class Input
{
public:
  //Posiible key states
  enum class InputState {
    INVALID,
    REGISTERED,
    UNREGISTERED,
    TRIGGERED,
    PRESSED,
    RELEASED

  };

  //State checking
  static InputState keyState(Qt::Key key);
  static bool keyTriggered(Qt::Key key) { return keyState(key) == InputState::TRIGGERED; }
  static bool keyPressed(Qt::Key key) { return keyState(key) == InputState::PRESSED; }
  static bool keyReleased(Qt::Key key) { return keyState(key) == InputState::RELEASED; }
  static InputState buttonState(Qt::MouseButton button);
  static bool buttonTriggered(Qt::MouseButton button) { return buttonState(button) == InputState::TRIGGERED; }
  static bool buttonPressed(Qt::MouseButton button) { return buttonState(button) == InputState::PRESSED; }
  static bool buttonReleased(Qt::MouseButton button) { return buttonState(button) == InputState::RELEASED; }
  static QPoint mousePosition();
  static QPoint mouseDelta();

private:

  //State updating
  static void update();
  static void registerKeyPress(int key);
  static void registerKeyRelease(int key);
  static void registerMousePress(Qt::MouseButton button);
  static void registerMouseRelease(Qt::MouseButton button);
  static void reset();
  friend class GLView;
};

#endif // INPUT_H
