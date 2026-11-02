#include "Player.h"
#include"Enemy.h"
#include<iostream>
using namespace std;

int Player::PlayerInput()
{
	int chose;

	cout << "行動を選択してください。\n";
	cout << "[1]:攻撃　[2]:防御　[3]:回復\n";

	while (true)
	{
		cin >> chose;

		if (chose > 3 || chose < 1)
		{
			cout << "入力に誤りがあります。再度入力してください。\n";
		}
		else
		{
			break;
		}
	}

	return chose;
}

void player::showAttack()
{
	cout << "敵に攻撃:30ダメージ\n";
}

void player::showDefense()
{
	cout << "防御:ダメージ10に軽減\n";
}

void player::showHeal()
{
	cout << "回復:20回復\n";
}