/*
 * TouchSink.h
 *
 *  Created on: Nov 2, 2015
 *      Author: pavel
 */

#ifndef RUSTYFIST_INCLUDE_RUSTYFIST_TOUCHSINK_H_
#define RUSTYFIST_INCLUDE_RUSTYFIST_TOUCHSINK_H_

#ifdef SWIG
	%feature("director") TouchSink;
#else
	#include <vector>
#endif

struct Touch
{
	int id;
	float x, y;
};

struct MousePos
{
	float x, y;
};

class TouchSink
{
public:
	TouchSink();
	virtual ~TouchSink();

	virtual void mouse(MousePos) = 0;
	virtual void touch(std::vector<Touch> const& touches) = 0;
};

#endif /* RUSTYFIST_INCLUDE_RUSTYFIST_TOUCHSINK_H_ */
