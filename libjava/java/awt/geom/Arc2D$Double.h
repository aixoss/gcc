
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_geom_Arc2D$Double__
#define __java_awt_geom_Arc2D$Double__

#pragma interface

#include <java/awt/geom/Arc2D.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace geom
      {
          class Arc2D$Double;
          class Rectangle2D;
      }
    }
  }
}

class java::awt::geom::Arc2D$Double : public ::java::awt::geom::Arc2D
{

public:
  Arc2D$Double();
  Arc2D$Double(jint);
  Arc2D$Double(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);
  Arc2D$Double(::java::awt::geom::Rectangle2D *, jdouble, jdouble, jint);
  virtual jdouble getX();
  virtual jdouble getY();
  virtual jdouble getWidth();
  virtual jdouble getHeight();
  virtual jdouble getAngleStart();
  virtual jdouble getAngleExtent();
  virtual jboolean isEmpty();
  virtual void setArc(jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);
  virtual void setAngleStart(jdouble);
  virtual void setAngleExtent(jdouble);
public: // actually protected
  virtual ::java::awt::geom::Rectangle2D * makeBounds(jdouble, jdouble, jdouble, jdouble);
public:
  jdouble __attribute__((aligned(__alignof__( ::java::awt::geom::Arc2D)))) x;
  jdouble y;
  jdouble width;
  jdouble height;
  jdouble start;
  jdouble extent;
  static ::java::lang::Class class$;
};

#endif // __java_awt_geom_Arc2D$Double__
