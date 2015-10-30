#pragma once

#ifdef SWIG
	%feature("director") GameLogic;
#else
	#include <string>
#endif

class GameLogic
{
public:
	GameLogic();
	virtual ~GameLogic();

	virtual void doSomething(std::string const&) = 0;
};
