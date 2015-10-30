#pragma onse

class GameLogic;

class RustyFist
{
public:
	RustyFist();
	virtual ~RustyFist();

	void setGameLogic(GameLogic*);

	int run();

private:
	GameLogic* _gameLogic = nullptr;
};

inline void RustyFist::setGameLogic(GameLogic* gameLogic)
{
	_gameLogic = gameLogic;
}
