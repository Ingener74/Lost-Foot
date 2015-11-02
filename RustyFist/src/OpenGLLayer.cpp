#include <iostream>
#include "RustyFist/DrawMe.h"
#include "OpenGLLayer.h"

using namespace cocos2d;
using namespace std;

OpenGLLayer::OpenGLLayer()
{
}

OpenGLLayer::~OpenGLLayer()
{
}

bool OpenGLLayer::init()
{
	return Layer::init();
}

cocos2d::Scene* OpenGLLayer::scene(DrawMe* drawMe)
{
	auto scene = Scene::create();

	OpenGLLayer *layer = OpenGLLayer::create();
	layer->setDrawMe(drawMe);

	scene->addChild(layer);

	return scene;
}

void OpenGLLayer::draw(cocos2d::Renderer* renderer, const cocos2d::Mat4& transform, uint32_t flags)
{
	if (_drawMe)
		_drawMe->draw();
}
