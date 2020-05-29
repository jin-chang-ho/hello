#include <iostream>
#include "Look.h"
#include "Enemy.h"
#include "User.h"

using namespace std;

int main() {
	Look * user = new User(); //user��ü ����//
	Look * enemy = new Enemy(); //enemy��ü ����//
	bool check = false; //�浹 ���θ� ������ ����//
	
	cout << "���� 5, ���� 5�� �ٵ��ǿ� ������� ������ �����մϴ�." << endl; //���� ����//
	cout << "������� ó�� ��ġ�� (0,0)�̰� ���� ���� 2~4, ���� 2~4 ��ġ�� �ڵ����� �����Ǿ����ϴ�." << endl; //�����Ǵ� ��ġ ����//
	user->start(); //user�� ó�� ��ġ//
	enemy->start(); //enemy�� ó�� ��ġ//

	cout << "����ڴ� 1���� �� 1��, ���� 3���� �� 1�� �����Դϴ�." << endl; //��� �����̴��� ����//

	while (true) {
		user->move(); //user�� ������//
		check = user->crash(enemy); //user�� enemy�� �浹 ����//
		if (check == true) { //�浹 �� �ݺ����� ���//
			break;
		}

		user->hint(enemy); //5�ϸ��� ���ƿ��� ��Ʈ//

		enemy->move(); //enemy�� ������//
		check = enemy->crash(user); //enemy�� user�� �浹 ����//
		if (check == true) { //�浹 �� �ݺ����� ���//
			break;
		}
	}

	delete user; //user ��ü �ݳ�//
	delete enemy; //enemy ��ü �ݳ�//

	cout << "������ �������ϴ�." << endl; //������ �������� ����//

	return 0; //���α׷� ����//
}