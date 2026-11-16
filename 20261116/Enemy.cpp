#include "Enemy.h"

Enemy::Enemy(const std::string& name) :name(name), hp(100)
{
	std::cout << name << "出現した\n";
}

Enemy::~Enemy()
{
	std::cout << name << "は破棄されました。\n";
}

void Enemy::Draw()const
{
	std::cout << "名前" << name << "\n";
	std::cout << "HP:" << hp << "\n";
}