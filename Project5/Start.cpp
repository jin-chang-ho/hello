#include <iostream>
#include "Look.h"
#include "Enemy.h"
#include "User.h"

using namespace std;

int main() {
	Look * user = new User(); //user객체 생성//
	Look * enemy = new Enemy(); //enemy객체 생성//
	bool check = false; //충돌 여부를 결정할 변수//
	
	cout << "가로 5, 세로 5인 바둑판에 술래잡기 게임을 시작합니다." << endl; //게임 시작//
	cout << "사용자의 처음 위치는 (0,0)이고 적은 가로 2~4, 세로 2~4 위치에 자동으로 생성되었습니다." << endl; //생성되는 위치 공지//
	user->start(); //user의 처음 위치//
	enemy->start(); //enemy의 처음 위치//

	cout << "사용자는 1라운드 당 1번, 적은 3라운드 당 1번 움직입니다." << endl; //어떻게 움직이는지 공지//

	while (true) {
		user->move(); //user가 움직임//
		check = user->crash(enemy); //user와 enemy의 충돌 여부//
		if (check == true) { //충돌 시 반복문을 벗어남//
			break;
		}

		user->hint(enemy); //5턴마다 돌아오는 힌트//

		enemy->move(); //enemy가 움직임//
		check = enemy->crash(user); //enemy와 user의 충돌 여부//
		if (check == true) { //충돌 시 반복문을 벗어남//
			break;
		}
	}

	delete user; //user 객체 반납//
	delete enemy; //enemy 객체 반납//

	cout << "게임이 끝났습니다." << endl; //게임이 끝났음을 공지//

	return 0; //프로그램 종료//
}