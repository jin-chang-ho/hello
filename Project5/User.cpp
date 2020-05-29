#include <iostream>
#include "Look.h"
#include "User.h"

using namespace std;

void User::start() { //User의 시작장소//
	x = 0; y = 0; //x = 0, y = 0에서 시작//
}

void User::move() { //User의 움직임//
	int count = 0;
	int what = 0;
	
	while (count == 0) {
		cout << "어디로 움직이시겠습니까(0:오른쪽, 1:왼쪽, 2:위, 3:아래)? "; //물어보기//
		cin >> what; 

		if (what == 0) { //오른쪽으로 움직임//
			x = x + 1;
			count++;
		}

		else if (what == 1) { //왼쪽으로 움직임//
			x = x - 1;
			count++;
		}

		else if (what == 2) { //위로 움직임//
			y = y + 1;
			count++;
		}

		else if (what == 3) { //아래로 움직임//
			y = y - 1;
			count++;
		}

		else { //잘못 입력한 경우//
			cout << "다시 입력하십시오.";
		}

		if (x < 0 || x > 4 || y < 0 || y > 4) { //만약 격자판을 벗어난 경우//
			if (x < 0) { //x가 0보다 작은 경우//
				x = x + 1;
				cout << "왼쪽으로 움직일 수 없습니다. 다른 수를 입력하십시오." << endl;
			}
			else if (x > 4) { //x가 4보다 큰 경우//
				x = x - 1;
				cout << "오른쪽으로 움직일 수 없습니다. 다른 수를 입력하십시오." << endl;
			}
			else if (y < 0) { //y가 0보다 큰 경우//
				y = y + 1;
				cout << "아래쪽으로 움직일 수 없습니다. 다른 수를 입력하십시오." << endl;
			}
			else if (y > 4) { //y가 4보다 큰 경우//
				y = y - 1;
				cout << "위쪽으로 움직일 수 없습니다. 다른 수를 입력하십시오." << endl;
			}
			count--; //다시 반복할 수 있도록 count변수 초기화//
		}
		cout << "사용자의 현재 위치는 (" << x << "," << y << ") 입니다. "; //사용자의 현재위치 출력//
	}
}