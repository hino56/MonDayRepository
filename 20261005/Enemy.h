#pragma once
#include"Character.h"

class Enemy :public Character
{
public:
	void EnemyTurn(int& PlayerHp, int& EnemyHp);

protected:
	const int MIN = 1;
	const int RANDOM_NUM = 2;

};

