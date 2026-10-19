#include "Boss.h"
#include <iostream>

Boss::Boss(string name) :Character(name) {}

void Boss::Attack()
{
	std::cout << "針人間(包囲)\n";
}