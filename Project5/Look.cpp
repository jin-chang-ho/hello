#include "Look.h"
#include <iostream>

using namespace std;

bool Look::crash(Look *look) { //두 객체가 충돌했을 때//
	if ((this->x == look->x) && (this->y == look->y))
		return true; //두 객체가 충돌했을 때 true반환//
	else
		return false; //두 객체가 충돌했을 때 false반환//
}

void Look::hint(Look * enemy) { //5턴마다 제공되는 힌트를 구현하는 함수//

	if (check == 4) { //5, 10, 15, ... 턴일 때마다 실행//
		cout << endl;
		cout << "5턴마다 제공되는 힌트입니다!!" << endl;

		if (this->x < enemy->x && this->y < enemy->y) { //Enemy가 User기준 북동쪽에 있을 때//
			cout << "Enemy는 User기준 북동쪽에 위치하고 있습니다." << endl;
		}
		else if (this->x > enemy->x && this->y < enemy->y) { //Enemy가 User기준 북서쪽에 있을 때//
			cout << "Enemy는 User기준 북서쪽에 위치하고 있습니다." << endl;
		}
		else if (this->x > enemy->x && this->y > enemy->y) { //Enemy가 User기준 남서쪽에 있을 때//
			cout << "Enemy는 User기준 남서쪽에 위치하고 있습니다." << endl;
		}
		else if (this->x < enemy->x && this->y > enemy->y) { //Enemy가 User기준 남동쪽에 있을 때//
			cout << "Enemy는 User기준 남동쪽에 위치하고 있습니다." << endl;
		}
		else if (this->x == enemy->x && this->y > enemy->y) { //Enemy가 User기준 남쪽에 있을 때//
			cout << "Enemy는 User기준 남쪽에 위치하고 있습니다." << endl;
		}
		else if (this->x == enemy->x && this->y < enemy->y) { //Enemy가 User기준 북쪽에 있을 때//
			cout << "Enemy는 User기준 북쪽에 위치하고 있습니다." << endl;
		}
		else if (this->x < enemy->x && this->y == enemy->y) { //Enemy가 User기준 오른쪽에 있을 때//
			cout << "Enemy는 User기준 오른쪽에 위치하고 있습니다." << endl;
		}
		else if (this->x > enemy->x && this->y == enemy->y) { //Enemy가 User기준 왼쪽에 있을 때//
			cout << "Enemy는 User기준 왼쪽에 위치하고 있습니다." << endl;
		}

		check = 0; //5턴마다 움직일 수 있도록 check변수 초기화//
	}

	else {
		check++; //1, 2, 3, 4, 6, 7, 8, 9, ... 턴일 때마다 실행//
	}
}