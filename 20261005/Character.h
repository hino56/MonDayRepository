#pragma once
#include<iostream>

class Character
{
protected:
	const int Hp = 100;
	const int Evasion = rand() % MAX_EVASION + MIN;
	const int Attack = rand() % MAX_ATTACK + MIN;
	const int Defense = rand() % MAX_DEFENSE + MIN;

public:


private:
	const int MAX_EVASION = 20;
	const int MAX_ATTACK = 20;
	const int MAX_DEFENSE = 20;
	const int MIN = 1;
};


