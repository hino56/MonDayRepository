#pragma once
#include "Character.h"

class Boss :public Character
{
public:
	Boss(string name);
	void Attack();
};

