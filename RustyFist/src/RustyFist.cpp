#include <iostream>

#include "RustyFist/RustyTest.h"
#include "RustyFist/RustyFist.h"

using namespace std;

RustyFist::RustyFist()
{
	cout << __PRETTY_FUNCTION__ << endl;
}

RustyFist::~RustyFist()
{
	cout << __PRETTY_FUNCTION__ << endl;
}

void RustyFist::test()
{
	if (_test)
		_test->doSomething("Hello, World!!!");
}
