#ifndef GLVIEW_H
#define GLVIEW_H


#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QMatrix4x4>
#include "transform3d.h"
#include "camera3d.h"

class QOpenGLShaderProgram;

class GLView: public QOpenGLWidget,
               protected QOpenGLFunctions
{
    Q_OBJECT
    //OpenGL Events
public:
    GLView(QWidget*&);
    GLView();
    ~GLView();

    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();
    void teardownGL();
protected slots:
  void update();

protected:
  void keyPressEvent(QKeyEvent *event);
  void keyReleaseEvent(QKeyEvent *event);
  void mousePressEvent(QMouseEvent *event);
  void mouseReleaseEvent(QMouseEvent *event);


private:
    QOpenGLBuffer m_vertex;
    QOpenGLVertexArrayObject m_object;
    QOpenGLShaderProgram * m_program;
    //Private Helpers
    void printContextInformation();

    //Shader Information
    int u_modelToWorld;
    int u_worldToCamera;
    int u_cameraToView;
    int u_worldToView;
    QMatrix4x4 m_projection;
    Camera3D m_camera;
    Transform3D m_transform;

    void printVersionInformation();
};

#endif // GLVIEW_H

