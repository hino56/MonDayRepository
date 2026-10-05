#pragma once
#include"Character.h"

class Player :public Character
{
public:
	Player(int Evasion, int Attack, int Defense)
	{
		int PlayerEv = Evasion;
		int PlayerAt = Attack;
		int PlayerDe = Defense;
	}

	void PlayerInput();
	void Hp();
	void Evasion();
	void Attack();
	void Defense();

protected:
	const int MAX_NUM = 2;
	const int MIN_NUM = 1;
};

