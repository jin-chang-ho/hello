#include "Look.h"
#include <iostream>

using namespace std;

bool Look::crash(Look *look) { //�� ��ü�� �浹���� ��//
	if ((this->x == look->x) && (this->y == look->y))
		return true; //�� ��ü�� �浹���� �� true��ȯ//
	else
		return false; //�� ��ü�� �浹���� �� false��ȯ//
}

void Look::hint(Look * enemy) { //5�ϸ��� �����Ǵ� ��Ʈ�� �����ϴ� �Լ�//

	if (check == 4) { //5, 10, 15, ... ���� ������ ����//
		cout << endl;
		cout << "5�ϸ��� �����Ǵ� ��Ʈ�Դϴ�!!" << endl;

		if (this->x < enemy->x && this->y < enemy->y) { //Enemy�� User���� �ϵ��ʿ� ���� ��//
			cout << "Enemy�� User���� �ϵ��ʿ� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		}
		else if (this->x > enemy->x && this->y < enemy->y) { //Enemy�� User���� �ϼ��ʿ� ���� ��//
			cout << "Enemy�� User���� �ϼ��ʿ� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		}
		else if (this->x > enemy->x && this->y > enemy->y) { //Enemy�� User���� �����ʿ� ���� ��//
			cout << "Enemy�� User���� �����ʿ� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		}
		else if (this->x < enemy->x && this->y > enemy->y) { //Enemy�� User���� �����ʿ� ���� ��//
			cout << "Enemy�� User���� �����ʿ� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		}
		else if (this->x == enemy->x && this->y > enemy->y) { //Enemy�� User���� ���ʿ� ���� ��//
			cout << "Enemy�� User���� ���ʿ� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		}
		else if (this->x == enemy->x && this->y < enemy->y) { //Enemy�� User���� ���ʿ� ���� ��//
			cout << "Enemy�� User���� ���ʿ� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		}
		else if (this->x < enemy->x && this->y == enemy->y) { //Enemy�� User���� �����ʿ� ���� ��//
			cout << "Enemy�� User���� �����ʿ� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		}
		else if (this->x > enemy->x && this->y == enemy->y) { //Enemy�� User���� ���ʿ� ���� ��//
			cout << "Enemy�� User���� ���ʿ� ��ġ�ϰ� �ֽ��ϴ�." << endl;
		}

		check = 0; //5�ϸ��� ������ �� �ֵ��� check���� �ʱ�ȭ//
	}

	else {
		check++; //1, 2, 3, 4, 6, 7, 8, 9, ... ���� ������ ����//
	}
}