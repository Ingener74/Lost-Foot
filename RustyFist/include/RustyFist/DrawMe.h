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
#else
	#include <string>
#endif

class DrawMe
{
public:
	DrawMe();
	virtual ~DrawMe();

	virtual void init() = 0;
	virtual void draw() = 0;
};

#endif /* RUSTYFIST_INCLUDE_RUSTYFIST_DRAWME_H_ */
