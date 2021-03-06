// Copyright (c) 2015, JRBS Team(jrbs.top)
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
// 1.Redistributions of source code must retain the above copyright
//   notice, this list of conditions and the following disclaimer.
//
// 2.Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the
//   documentation and/or other materials provided with the distribution.
//
// 3.Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
// OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
// TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
// USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef GLESWRAPPER_CORE_UNIFORM_H
#define GLESWRAPPER_CORE_UNIFORM_H

#include "Predefine.h"
#include "core/Object.h"

namespace gl
{
  class Uniform
  {
    public:
      friend class Program;

      /**
       * Construct a default Uniform object with location and program of 0
       *
       */
      Uniform() : mProg(0), mLoc(0) {}

      /**
       * Construct a Uniform object with the specified location and program
       *
       * @param pro the specified program id
       * @param loc the specified location
       */
      Uniform(GLuint prog, GLint loc) :
        mProg(prog), mLoc(loc) {}

      /**
       * Simplely reset both the location and program to 0
       */
      virtual ~Uniform()
      {
        mProg = 0;
        mLoc = 0;
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform1f(GLint location, GLfloat v0)
       */
      inline void Set(GLfloat v0)
      {
        ::glUniform1f(mLoc, v0);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform2f(GLint location, GLfloat v0, GLfloat v1)
       */
      inline void Set(GLfloat v0, GLfloat v1)
      {
        ::glUniform2f(mLoc, v0, v1);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
       */
      inline void Set(GLfloat v0, GLfloat v1, GLfloat v2)
      {
        ::glUniform3f(mLoc, v0, v1, v2);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
       */
      inline void Set(GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
      {
        ::glUniform4f(mLoc, v0, v1, v2, v3);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform1i(GLint location, GLint v0)
       */
      inline void Set(GLint v0)
      {
        ::glUniform1i(mLoc, v0);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform2i(GLint location, GLint v0, GLint v1)
       */
      inline void Set(GLint v0, GLint v1)
      {
        ::glUniform2i(mLoc, v0, v1);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
       */
      inline void Set(GLint v0, GLint v1, GLint v2)
      {
        ::glUniform3i(mLoc, v0, v1, v2);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
       */
      inline void Set(GLint v0, GLint v1, GLint v2, GLint v3)
      {
        ::glUniform4i(mLoc, v0, v1, v2, v3);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform1fv(GLint location, GLsizei count, const GLfloat *value)
       */
      inline void Set1v(GLsizei count, const GLfloat* v)
      {
        ::glUniform1fv(mLoc, count, v);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform2fv(GLint location, GLsizei count, const GLfloat *value)
       */
      inline void Set2v(GLsizei count, const GLfloat* v)
      {
        ::glUniform2fv(mLoc, count, v);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform3fv(GLint location, GLsizei count, const GLfloat *value)
       */
      inline void Set3v(GLsizei count, const GLfloat* v)
      {
        ::glUniform3fv(mLoc, count, v);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform4fv(GLint location, GLsizei count, const GLfloat *value)
       */
      inline void Set4v(GLsizei count, const GLfloat* v)
      {
        ::glUniform4fv(mLoc, count, v);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform1iv(GLint location, GLsizei count, const GLint *value)
       */
      inline void Set1v(GLsizei count, const GLint* v)
      {
        ::glUniform1iv(mLoc, count, v);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform2iv(GLint location, GLsizei count, const GLint *value)
       */
      inline void Set2v(GLsizei count, const GLint* v)
      {
        ::glUniform2iv(mLoc, count, v);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform3iv(GLint location, GLsizei count, const GLint *value)
       */
      inline void Set3v(GLsizei count, const GLint* v)
      {
        ::glUniform3iv(mLoc, count, v);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniform4iv(GLint location, GLsizei count, const GLint *value)
       */
      inline void Set4v(GLsizei count, const GLint* v)
      {
        ::glUniform4iv(mLoc, count, v);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
       */
      inline void SetMatrix2v(GLsizei count, const GLfloat* v)
      {
        ::glUniformMatrix2fv(mLoc, count, GL_FALSE, v);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
       */
      inline void SetMatrix3v(GLsizei count, const GLfloat* v)
      {
        ::glUniformMatrix3fv(mLoc, count, GL_FALSE, v);
      }

      /**
       * Specify the value of a uniform variable for the current program object
       *
       * @see glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value)
       */
      inline void SetMatrix4v(GLsizei count, const GLfloat* v)
      {
        ::glUniformMatrix4fv(mLoc, count, GL_FALSE, v);
      }

      /**
       * Return the location of the Uniform object
       *
       * @return the location
       */
      inline GLint GetLocation() const
      {
        return mLoc;
      }

      /**
       * Return the program id of the Uniform object
       *
       * @return the program id
       */
      inline GLuint GetProgram() const
      {
        return mProg;
      }

      /**
       * Return the value of a uniform variable
       *
       * @see glGetUniformfv(GLuint program, GLint location, GLfloat *params)
       */
      inline void Get(GLfloat* v) const
      {
        ::glGetUniformfv(mProg, mLoc, v);
      }

      /**
       * Return the value of a uniform variable
       *
       * @see glGetUniformiv(GLuint program, GLint location, GLint *params)
       */
      inline void Get(GLint* v) const
      {
        ::glGetUniformiv(mProg, mLoc, v);
      }

    protected:
      GLuint mProg;
      GLint mLoc;
  }; // class Uniform

} // namespace gl

#endif // GLESWRAPPER_CORE_UNIFORM_H
