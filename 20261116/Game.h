#pragma once
#include<memory>
#include<vector>
#include"Enemy.h"
#include"Config.h"

class Game
{
	std::vector<std::shared_ptr<Enemy>>enemies;

	void Init();

	void Draw()const;

	void Attack();

	bool IsGameClear()const;

public:
	void Run();
};

