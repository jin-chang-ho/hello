
#include <iostream>
#include <ctime>
#include "Look.h"
#include "Enemy.h"

using namespace std;

void Enemy::start() { //Enemy�� �������//
	srand((unsigned)time(NULL));

	x = rand() % 3 + 2; //x�� 2,3,4 �߿� �ϳ��� ����// 
	y = rand() % 3 + 2; //y�� 2,3,4 �߿� �ϳ��� ����// 
}

void Enemy::move() { //Enemy�� ������//
	srand((unsigned)time(NULL)); //�ٽ� ��ü�� ������ ������ what������ �ʱ�ȭ//

	int count = 0; //�� ���� �����°��� Ȯ��//
	int what; //���� ����//

	if (check == 2) { //3, 6, 9, ... ���� ������ ����//
		while (count == 0) {

			what = rand() % 4; //what�� 0, 1, 2, 3 �� �ϳ��� ����//

			if (what == 0) { //what�� 0�� ��//
				x = x + 1;
				count++;
			}
			else if (what == 1) { //what�� 1�� ��//
				x = x - 1;
				count++;
			}
			else if (what == 2) { //what�� 2�� ��//
				y = y + 1;
				count++;
			}
			else { //what�� 3�� ��//
				y = y - 1;
				count++;
			}

			if (x < 0 || x > 4 || y < 0 || y > 4) { //���� �������� ��� ���//
				if (x < 0) { //x�� 0���� ���� ���//
					x = x + 1;
				}
				else if (x > 4) { //x�� 4���� ū ���//
					x = x - 1;
				} 
				else if (y < 0) { //y�� 0���� ū ���//
					y = y + 1;
				}
				else if (y > 4) { //y�� 4���� ū ���//
					y = y - 1;
				}
				count--; //�ٽ� �ݺ��� �� �ֵ��� count���� �ʱ�ȭ//
			}
		}
		check = 0; //3�ϸ��� ������ �� �ֵ��� check���� �ʱ�ȭ//
	}

	else { //1, 2, 4, 5, ... ���� ������ ����//
		check++; 
	}
}