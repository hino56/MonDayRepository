#include "Enemy.h"
#include <cstdlib>
#include<iostream>
using namespace std;

int Enemy::Chose()
{
	int chose = rand() % 2 + 1;
	return chose;
}

void enemy::showAttack()
{
	cout << "プレイヤーに攻撃:20ダメージ\n";
}

void enemy::showDefense()
{
	cout << "防御:ダメージ無効\n";
}