
class Look { //User�� Enemy�� �⺻ Ŭ����//
protected:
	int x, y, check = 0; //��ǥ�� ��Ÿ�� ���� x, y�� �� �� �Ŀ� �����̴� ���� ��Ÿ�� check����//
public:
	virtual void start() = 0; //�� ��ü�� ù ������Ҹ� �����ϴ� �Լ�//
	virtual void move() = 0; //�� ��ü�� �������� �����ϴ� �Լ�//
	void hint(Look * enemy); //User���� Enemy�� ������ �˷��ִ� �Լ�//
	bool crash(Look* look); //�� ��ü�� �ε�ĥ ��� ������ ������ �ϴ� �Լ�//
};
