#include <iostream>

#include <cocos2d.h>
#include "AppDelegate.h"

#include "RustyFist/RustyFist.h"
#include "RustyFist/GameLogic.h"
#include "RustyFist/TouchSink.h"

using namespace std;
using namespace cocos2d;

RustyFist::RustyFist(DrawMe* t, GameLogic* gl, TouchSink* ts) :
	_drawMe(t), _gameLogic(gl), _touchSink(ts)
{
}

RustyFist::~RustyFist()
{
}

int RustyFist::run()
{
	AppDelegate app{ _gameLogic, _drawMe, _touchSink };
	return Application::getInstance()->run();
}
