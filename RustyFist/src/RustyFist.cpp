#include <iostream>

#include <cocos2d.h>
#include "AppDelegate.h"

#include "RustyFist/RustyFist.h"
#include "../include/RustyFist/GameLogic.h"

using namespace std;
using namespace cocos2d;

RustyFist::RustyFist()
{
}

RustyFist::~RustyFist()
{
}

int RustyFist::run()
{
    AppDelegate app{_gameLogic};
    return Application::getInstance()->run();
}
