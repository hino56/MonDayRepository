#include "Enemy.h"
#include<iostream>

Enemy::Enemy(string name) :Character(name) {}

void Enemy::Attack()
{
	cout << "つぼねバイク(追跡)" << endl;
}