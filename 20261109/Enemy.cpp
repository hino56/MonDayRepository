#include "Enemy.h"
#include<iostream>

Enemy::Enemy()
{
	std::cout << "Enemyを生成しました。" << std::endl;
}

Enemy::~Enemy()
{
	std::cout << "Enemyを破棄しました。" << std::endl;
}

//void Enemy::Update()
//{
//	std::cout << "Enemyを更新しました。" << std::endl;
//}

void Enemy::Draw()const
{
	int hp = GetHp();
	std::cout << "Enemy Hp < " << hp << " >\n";
}

int Enemy::GetHp()const
{
	Hp;
	return Hp;
}

//void Enemy::ShowEnemy(const Enemy& enemy)
//{
//	int hp = GetHp();
//	std::cout << "Enemy Hp < " << hp << " >\n";
//}