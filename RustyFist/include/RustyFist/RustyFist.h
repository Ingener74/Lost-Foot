#pragma onse

class GameLogic;
class DrawMe;

class RustyFist
{
public:
	RustyFist();
	virtual ~RustyFist();

	void setDrawLayer(DrawMe*);
	void setGameLogic(GameLogic*);

	int run();

private:
	GameLogic* _gameLogic = nullptr;
	DrawMe* _drawMe = nullptr;
};

inline void RustyFist::setDrawLayer(DrawMe* drawMe)
{
	_drawMe = drawMe;
}

inline void RustyFist::setGameLogic(GameLogic* gameLogic)
{
	_gameLogic = gameLogic;
}
