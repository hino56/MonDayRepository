#include "Game.h"
#include<iostream>
#include<limits>
#include"Config.h"

void Game::Init()
{
	for (int i = 0;i < Config::ENEMY_COUNT;i++)
	{
		enemies.push_back(std::make_shared<Enemy>());
	}
}

void Game::Draw()const
{
	std::cout << "敵\n";
	for (int i = 0;i < enemies.size();i++)
	{
		if (enemies[i]->IsAlive())
		{
			std::cout << "敵" << i + 1 << "HP:" << enemies[i]->GetHp() << std::endl;
		}
		else
		{
			std::cout << "撃破済み\n";
		}
	}
}

void Game::Attack()
{
	int target;
	std::cout << "攻撃する敵を選択してください。(１～３)\n";

	if (!(std::cin >> target))
	{
		std::cout << "数字を入力してください\n";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		return;
	}

	if (target < 1 || target > Config::ENEMY_COUNT)
	{
		std::cout << "入力した数字は選択出来ません。再度入力してください。\n";
		return;
	}

	std::shared_ptr<Enemy> targetEnemy = enemies[target - 1];

	if (!targetEnemy->IsAlive())
	{
		std::cout << "この敵はすでに倒されています。\n";
		return;
	}

	std::cout << "攻撃する敵は、" << target << "\n";

	targetEnemy->Damage(Config::DAMAGE);
	std::cout << "敵" << target << "に戦闘ダメージ"
		<< Config::DAMAGE << "を与えました。\n";
}

bool Game::IsGameClear()const
{
	for (const auto& enemy : enemies)
	{
		if (enemy->IsAlive())
		{
			return false;
		}
	}

	return true;
}

void Game::Run()
{
	Init();

	while (true)
	{
		Draw();
		Attack();
		if (IsGameClear())
		{
			std::cout << "GamerClear\n";
			break;
		}
	}
}