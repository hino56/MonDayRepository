#include "Enemy.h"
#include<iostream>
using namespace std;

void Enemy::EnemyTurn(int& PlayerHp, int& EnemyHp)
{
	int EJudge = rand() % RANDOM_NUM + MIN;

	if (EJudge == MIN)
	{
		JudgeDamage(PlayerHp, EnemyHp, false);
	}
	else
	{
		JudgeRecovery(EnemyHp, false);
	}
}