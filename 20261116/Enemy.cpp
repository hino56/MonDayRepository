#include "Enemy.h"
#include"Config.h"

Enemy::Enemy() :hp(Config::ENEMY_HP) {}
Enemy::~Enemy() {}

void Enemy::Damage(int damage)
{
	hp -= damage;
	if (hp < 0)
	{
		hp = 0;
	}
}

int Enemy::GetHp()const
{
	return hp;
}

bool Enemy::IsAlive()const
{
	return hp > 0;
}