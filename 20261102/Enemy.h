#pragma once

class Enemy
{
public:
	int Chose();
	int hp = 100;
};

namespace enemy
{
	void showAttack();
	void showDefense();
}