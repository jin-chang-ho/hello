
#include <iostream>
#include <ctime>
#include "Look.h"
#include "Enemy.h"

using namespace std;

void Enemy::start() { //Enemy의 시작장소//
	srand((unsigned)time(NULL));

	x = rand() % 3 + 2; //x가 2,3,4 중에 하나로 결정// 
	y = rand() % 3 + 2; //y가 2,3,4 중에 하나로 결정// 
}

void Enemy::move() { //Enemy의 움직임//
	srand((unsigned)time(NULL)); //다시 객체가 움직일 때마다 what변수를 초기화//

	int count = 0; //몇 턴이 지났는가를 확인//
	int what; //랜덤 변수//

	if (check == 2) { //3, 6, 9, ... 턴일 때마다 실행//
		while (count == 0) {

			what = rand() % 4; //what은 0, 1, 2, 3 중 하나로 결정//

			if (what == 0) { //what이 0일 때//
				x = x + 1;
				count++;
			}
			else if (what == 1) { //what이 1일 때//
				x = x - 1;
				count++;
			}
			else if (what == 2) { //what이 2일 때//
				y = y + 1;
				count++;
			}
			else { //what이 3일 때//
				y = y - 1;
				count++;
			}

			if (x < 0 || x > 4 || y < 0 || y > 4) { //만약 격자판을 벗어난 경우//
				if (x < 0) { //x가 0보다 작은 경우//
					x = x + 1;
				}
				else if (x > 4) { //x가 4보다 큰 경우//
					x = x - 1;
				} 
				else if (y < 0) { //y가 0보다 큰 경우//
					y = y + 1;
				}
				else if (y > 4) { //y가 4보다 큰 경우//
					y = y - 1;
				}
				count--; //다시 반복할 수 있도록 count변수 초기화//
			}
		}
		check = 0; //3턴마다 움직일 수 있도록 check변수 초기화//
	}

	else { //1, 2, 4, 5, ... 턴일 때마다 실행//
		check++; 
	}
}