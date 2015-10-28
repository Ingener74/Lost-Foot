#pragma onse

class RustyTest;

class RustyFist
{
public:
	RustyFist();
	virtual ~RustyFist();

	void setTest(RustyTest*);

	void test();
private:
	RustyTest* _test = nullptr;
};

inline void RustyFist::setTest(RustyTest* t)
{
	_test = t;
}
