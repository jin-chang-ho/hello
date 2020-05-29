
class Look { //User와 Enemy의 기본 클래스//
protected:
	int x, y, check = 0; //좌표를 나타낼 변수 x, y와 몇 턴 후에 움직이는 지를 나타낼 check변수//
public:
	virtual void start() = 0; //각 객체의 첫 시작장소를 설정하는 함수//
	virtual void move() = 0; //각 객체의 움직임을 정의하는 함수//
	void hint(Look * enemy); //User에게 Enemy의 방향을 알려주는 함수//
	bool crash(Look* look); //두 객체가 부딪칠 경우 게임을 끝내게 하는 함수//
};
