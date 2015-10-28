
#include <iostream>

#include "RustyFist/RustyFist.h"

using namespace std;

RustyFist::RustyFist(){
	cout << __PRETTY_FUNCTION__ << endl;
}

RustyFist::~RustyFist(){
	cout << __PRETTY_FUNCTION__ << endl;
}

void RustyFist::test(){
	cout << "Hello, World!!!" << endl;
}