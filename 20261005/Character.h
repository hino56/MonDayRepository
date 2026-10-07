#pragma once
#include<iostream>

class Character
{
protected:

	int Evasion()
	{
		return rand() % MAX_EVASION + MIN;
	}

	int Attack()
	{
		return rand() % MAX_ATTACK + MIN;
	}

	int Defense()
	{
		return rand() % MAX_DEFENSE + MIN;
	}

	int RandomAt()
	{
		return rand() % MAX_RADOM_AT + MIN;
	}

	int Recovery()
	{
		return rand() % MAX_RECOVERY + MIN;
	}


	void JudgeDamage(int& PlayerHp, int& EnemyHp, bool isPlayer);
	void JudgeRecovery(int& NowHp, bool isPlayer);

	const int HP = 100;
	const int MIN_AT_NUM = 0;

public:
	/*int JudgeRecovery(int& PlayerHp, int& EnemyHp);*/

private:
	const int MAX_EVASION = 20;
	const int MAX_ATTACK = 20;
	const int MAX_DEFENSE = 20;
	const int MAX_RADOM_AT = 12;
	const int MAX_RECOVERY = 12;
	const int MIN = 1;

};


