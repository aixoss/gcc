
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_lang_annotation_Target__
#define __java_lang_annotation_Target__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>


class java::lang::annotation::Target : public ::java::lang::Object
{

public:
  virtual JArray< ::java::lang::annotation::ElementType * > * value() = 0;
  virtual ::java::lang::Class * annotationType() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_lang_annotation_Target__