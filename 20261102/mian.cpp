#include "Player.h"
#include"Enemy.h"
#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Player playerInstance;
Enemy enemyInstance;

int main(void)
{
	srand((unsigned int)time(NULL));

	cout << "========== Gmae Start ==========\n";

	while (true)
	{
		int chose = playerInstance.PlayerInput();
		int EChose = enemyInstance.Chose();


		if (chose == 1 && EChose == 1)
		{
			player::showAttack();
			enemy::showAttack();
			playerInstance.hp -= 20;
			enemyInstance.hp -= 30;
		}
		else if (chose == 1 && EChose == 2)
		{
			player::showAttack();
			enemy::showDefense();
		}
		else if (chose == 2 && EChose == 1)
		{
			enemy::showAttack();
			player::showDefense();
			playerInstance.hp -= 10;
		}
		else if (chose == 2 && EChose == 2)
		{
			player::showDefense();
			enemy::showDefense();
		}
		else if (chose == 3 && EChose == 1)
		{
			player::showHeal();
			enemy::showAttack();
			playerInstance.hp += 20;
			playerInstance.hp -= 20;
		}
		else if (chose == 3 && EChose == 2)
		{
			player::showHeal();
			enemy::showDefense();
			playerInstance.hp += 20;

			if (playerInstance.hp >= 100)
			{
				playerInstance.hp = 100;
			}
		}

		if (playerInstance.hp <= 0 || enemyInstance.hp <= 0)
		{
			if (playerInstance.hp <= 0)
			{
				cout << "Player Hp : 0\n";
				cout << "========== YOU LOSE ==========\n";
			}
			else if (enemyInstance.hp <= 0)
			{
				cout << "Enemy Hp : 0\n";
				cout << "========== YOU WIN ==========\n";
			}

			break;
		}

		cout << "Player Hp : " << playerInstance.hp << endl;
		cout << "Enemy Hp : " << enemyInstance.hp << endl;
		cout << " " << endl;

	}



}