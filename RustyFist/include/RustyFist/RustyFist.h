#pragma onse

class GameLogic;
class DrawMe;
class TouchSink;

class RustyFist
{
public:
	RustyFist(DrawMe*, GameLogic*, TouchSink*);
	virtual ~RustyFist();

	void setDrawLayer(DrawMe*);
	void setGameLogic(GameLogic*);
	void setTouchSink(TouchSink*);

	int run();

private:
	GameLogic* _gameLogic = nullptr;
	DrawMe* _drawMe = nullptr;
	TouchSink* _touchSink = nullptr;
};

inline void RustyFist::setDrawLayer(DrawMe* drawMe)
{
	_drawMe = drawMe;
}

inline void RustyFist::setGameLogic(GameLogic* gameLogic)
{
	_gameLogic = gameLogic;
}

inline void RustyFist::setTouchSink(TouchSink* touchSink)
{
	_touchSink = touchSink;
}
