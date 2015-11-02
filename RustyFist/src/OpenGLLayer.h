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

	static cocos2d::Scene* scene(DrawMe*, TouchSink*);

	CREATE_FUNC(OpenGLLayer);

	virtual void draw(cocos2d::Renderer *renderer, const cocos2d::Mat4 &transform, uint32_t flags) override;
	void setDrawMe(DrawMe*);
	void setTouchSink(TouchSink*);

private:
	virtual void onTouchesBegan(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event *unused_event);
	virtual void onTouchesMoved(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event *unused_event);
	virtual void onTouchesEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event *unused_event);
	virtual void onTouchesCancelled(const std::vector<cocos2d::Touch*>&touches, cocos2d::Event *unused_event);

	virtual void sendTouch(const std::vector<cocos2d::Touch*>&);

	DrawMe* _drawMe = nullptr;
	TouchSink* _ts = nullptr;
};

inline void OpenGLLayer::setDrawMe(DrawMe* drawMe)
{
	_drawMe = drawMe;
}

#endif /* RUSTYFIST_SRC_OPENGLLAYER_H_ */
