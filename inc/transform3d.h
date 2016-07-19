#ifndef TRANSFORM3D_H
#define TRANSFORM3D_H

#include <QVector3D>
#include <QQuaternion>
#include <QMatrix4x4>

class Transform3D
{
public:
    static const QVector3D LocalForward;
    static const QVector3D LocalUp;
    static const QVector3D LocalRight;

    Transform3D() : m_dirty(true), m_scale(1.0f, 1.0f, 1.0f) {}

    void translate(const QVector3D &dt);
    void translate(float dx, float dy, float dz) { translate(QVector3D(dx, dy, dz)); }
    void scale(const QVector3D &ds);
    void scale(float dx, float dy, float dz) { scale(QVector3D(dx, dy, dz)); }
    void scale(float factor) { scale(QVector3D(factor, factor, factor)); }
    void rotate(const QQuaternion &dr);
    void rotate(float angle, const QVector3D &axis) { rotate(QQuaternion::fromAxisAndAngle(axis, angle)); }
    void rotate(float angle, float ax, float ay, float az) { rotate(QQuaternion::fromAxisAndAngle(ax, ay, az, angle)); }
    void grow(const QVector3D &ds);
    void grow(float dx, float dy, float dz) { grow(QVector3D(dx, dy, dz)); }
    void grow(float factor) { grow(QVector3D(factor, factor, factor)); }

    void setTranslation(const QVector3D &t);
    void setTranslation(float x, float y, float z) { setTranslation(QVector3D(x,y,z)); }
    void setScale(const QVector3D &s);
    void setScale(float x, float y, float z) { setScale(QVector3D(x, y, z)); }
    void setScale(float k) { setScale(QVector3D(k, k, k)); }
    void setRotation(const QQuaternion &r);
    void setRotation(float angle, const QVector3D &axis) { setRotation(QQuaternion::fromAxisAndAngle(axis, angle)); }
    void setRotation(float angle, float ax, float ay, float az) { setRotation(QQuaternion::fromAxisAndAngle(ax, ay, az, angle)); }

    const QVector3D& translation() const { return m_translation; }
    const QVector3D& scale() const { return m_scale; }
    const QQuaternion& rotation() const { return m_rotation; }
    const QMatrix4x4& toMatrix();

    // Queries
    QVector3D forward() const;
    QVector3D up() const;
    QVector3D right() const;


private:
    bool m_dirty;
    QVector3D m_translation;
    QVector3D m_scale;
    QQuaternion m_rotation;
    QMatrix4x4 m_world;

#ifndef QT_NO_DATASTREAM
    friend QDataStream &operator<<(QDataStream &out, const Transform3D &transform);
    friend QDataStream &operator>>(QDataStream &in, Transform3D &transform);
#endif
};


Q_DECLARE_TYPEINFO(Transform3D, Q_MOVABLE_TYPE);


//Qt Streams
#ifndef QT_NO_DEBUG_STREAM
QDebug operator<<(QDebug dbg, const Transform3D &transform);
#endif

#ifndef QT_NO_DATASTREAM
QDataStream &operator<<(QDataStream &out, const Transform3D &transform);
QDataStream &operator>>(QDataStream &in, Transform3D &transform);
#endif

#endif // TRANSFORM3D_H
