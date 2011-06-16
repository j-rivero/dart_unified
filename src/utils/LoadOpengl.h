/*
  RTQL8, Copyright (c) 2011 Georgia Tech Graphics Lab
  All rights reserved.

  Author	Sehoon Ha
  Date		06/12/2011
*/

#ifndef UTILS_LOAD_OPENGL_H
#define UTILS_LOAD_OPENGL_H

#if WIN32
#include <GL/glut.h>
#elif defined(__linux)
#include <GL/glut.h>
#elif APPLE
#include <Glut/glut.h>
#else
#error "Load OpenGL Error: What's your operating system?"
#endif

#endif // #ifndef UTILS_LOAD_OPENGL_H
