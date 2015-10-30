/*
 * DrawMe.h
 *
 *  Created on: Oct 30, 2015
 *      Author: pavel
 */

#ifndef RUSTYFIST_INCLUDE_RUSTYFIST_DRAWME_H_
#define RUSTYFIST_INCLUDE_RUSTYFIST_DRAWME_H_

#ifdef SWIG
	%feature("director") DrawMe;

	%typemap(ctype)  void * "void *"
	%typemap(imtype) void * "System.IntPtr"
	%typemap(cstype) void * "System.IntPtr"
	%typemap(csin)   void * "$csinput"
	%typemap(in)     void * %{ $1 = $input; %}
	%typemap(out)    void * %{ $result = $1; %}
	%typemap(csout)  void * { return $imcall; }

#else
	#include <string>
#endif


class TestIntPtr
{
public:
	virtual ~TestIntPtr()
	{
	}
	virtual void * getContext() = 0;
	virtual void * getAddress(const std::string& name) = 0;
};


class DrawMe
{
public:
	DrawMe();
	virtual ~DrawMe();

	virtual void init(TestIntPtr *) = 0;
	virtual void draw() = 0;
};

#endif /* RUSTYFIST_INCLUDE_RUSTYFIST_DRAWME_H_ */
