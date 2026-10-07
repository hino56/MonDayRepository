#pragma once
#include"Character.h"


class Player :public Character
{
public:
	/*int Hp;*/
	int PlayerInput(int& num);
	void PlayerTurn(int& PlayerHp, int& EnemyHp);

protected:
	const int MAX_NUM = 2;
	const int MIN_NUM = 1;

};