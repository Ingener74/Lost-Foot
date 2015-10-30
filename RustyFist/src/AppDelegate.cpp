#include "AppDelegate.h"

#include <vector>
#include <string>
#include <iostream>

#include "HelloWorldScene.h"
#include "AppMacros.h"

#include "RustyFist/GameLogic.h"
#include "RustyFist/DrawMe.h"
#include "OpenGLLayer.h"

USING_NS_CC;
using namespace std;

AppDelegate::AppDelegate(GameLogic* gameLogic, DrawMe* drawMe) :
	_gameLogic(gameLogic), _drawMe(drawMe)
{
}

AppDelegate::~AppDelegate() {
}

void AppDelegate::initGLContextAttrs() {
    GLContextAttrs glContextAttrs = { 8, 8, 8, 8, 24, 8 };

    GLView::setGLContextAttrs(glContextAttrs);
}

class ImplTestIntPtr: public TestIntPtr
{
public:
	ImplTestIntPtr()
	{
	}
	virtual ~ImplTestIntPtr()
	{
	}
	virtual void * getContext()
	{
		GLFWwindow* context = glfwGetCurrentContext();
		cout << "out context " << context << endl;
		return context;
	}
	virtual void * getAddress(const std::string& name)
	{
		void* procAddress = reinterpret_cast<void*>(glfwGetProcAddress(name.c_str()));
		cout << procAddress << " GetProcAddress for " << name << endl;
		return procAddress;
	}
};

bool AppDelegate::applicationDidFinishLaunching() {
    // initialize director
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();

    GLViewImpl* glViewImpl = nullptr;

    if (!glview) {
    	glViewImpl = GLViewImpl::create("Cpp Empty Test");
        glview = glViewImpl;
        director->setOpenGLView(glview);
    }

    director->setOpenGLView(glview);

    // Set the design resolution
    glview->setDesignResolutionSize(designResolutionSize.width, designResolutionSize.height,
        ResolutionPolicy::NO_BORDER);

    Size frameSize = glview->getFrameSize();

    vector<string> searchPath;

    // In this demo, we select resource according to the frame's height.
    // If the resource size is different from design resolution size, you need to set contentScaleFactor.
    // We use the ratio of resource's height to the height of design resolution,
    // this can make sure that the resource's height could fit for the height of design resolution.

    // if the frame's height is larger than the height of medium resource size, select large resource.
    if (frameSize.height > mediumResource.size.height) {
        searchPath.push_back(largeResource.directory);

        director->setContentScaleFactor(
            MIN(largeResource.size.height / designResolutionSize.height,
                largeResource.size.width / designResolutionSize.width));
    }
    // if the frame's height is larger than the height of small resource size, select medium resource.
    else if (frameSize.height > smallResource.size.height) {
        searchPath.push_back(mediumResource.directory);

        director->setContentScaleFactor(
            MIN(mediumResource.size.height / designResolutionSize.height,
                mediumResource.size.width / designResolutionSize.width));
    }
    // if the frame's height is smaller than the height of medium resource size, select small resource.
    else {
        searchPath.push_back(smallResource.directory);

        director->setContentScaleFactor(
            MIN(smallResource.size.height / designResolutionSize.height,
                smallResource.size.width / designResolutionSize.width));
    }

    searchPath.push_back("/home/pavel/Workspace/Lost-Foot/RustyFist/Resources");
    searchPath.push_back("/home/pavel/Workspace/Lost-Foot/RustyFist/Resources/ipad");

    for (auto i : searchPath)
        cout << i << endl;

    // set searching path
    FileUtils::getInstance()->setSearchPaths(searchPath);

    // turn on display FPS
    director->setDisplayStats(true);

    // set FPS. the default value is 1.0/60 if you don't call this
    director->setAnimationInterval(1.0 / 60);

    // create a scene. it's an autorelease object
//    auto scene = HelloWorld::scene();

    auto scene = OpenGLLayer::scene(_drawMe);

    _gameLogic->doSomething("Дай пять");

    // run
    director->runWithScene(scene);

	_testIntPtr = new ImplTestIntPtr;
	if (_drawMe)
		_drawMe->init(_testIntPtr);

    return true;
}

void AppDelegate::applicationDidEnterBackground() {
    Director::getInstance()->stopAnimation();
}

void AppDelegate::applicationWillEnterForeground() {
    Director::getInstance()->startAnimation();
}
