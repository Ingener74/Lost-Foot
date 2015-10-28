#pragma once

#ifdef SWIG
	%feature("director") RustyTest;
#else
	#include <string>
#endif

class RustyTest
{
public:
	RustyTest();
	virtual ~RustyTest();

	virtual void doSomething(std::string const&) = 0;
};
