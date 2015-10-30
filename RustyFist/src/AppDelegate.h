#ifndef  _APP_DELEGATE_H_
#define  _APP_DELEGATE_H_

#include "cocos2d.h"

class GameLogic;
class DrawMe;
class TestIntPtr;

class  AppDelegate : private cocos2d::Application
{
public:
    AppDelegate(GameLogic* = nullptr, DrawMe* = nullptr);
    virtual ~AppDelegate();

    virtual void initGLContextAttrs();
    
    virtual bool applicationDidFinishLaunching();
    virtual void applicationDidEnterBackground();
    virtual void applicationWillEnterForeground();

private:
    GameLogic* _gameLogic = nullptr;
    DrawMe* _drawMe = nullptr;
    TestIntPtr* _testIntPtr = nullptr;
};

#endif // _APP_DELEGATE_H_

