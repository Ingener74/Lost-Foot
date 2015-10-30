/*
 * OpenGLLayer.h
 *
 *  Created on: Oct 30, 2015
 *      Author: pavel
 */

#ifndef RUSTYFIST_SRC_OPENGLLAYER_H_
#define RUSTYFIST_SRC_OPENGLLAYER_H_

#include <cocos2d.h>

class DrawMe;

class OpenGLLayer: public cocos2d::Layer
{
public:
	OpenGLLayer();
	virtual ~OpenGLLayer();

	virtual bool init() override;

	static cocos2d::Scene* scene(DrawMe*);

	CREATE_FUNC(OpenGLLayer);

	virtual void draw(cocos2d::Renderer *renderer, const cocos2d::Mat4 &transform, uint32_t flags) override;
	void setDrawMe(DrawMe* drawMe);

private:
	DrawMe* _drawMe = nullptr;
};

#endif /* RUSTYFIST_SRC_OPENGLLAYER_H_ */
