#include<iostream>
#include"Enemy.h"

void ShowEnemy(const Enemy& enemy)
{
	std::cout << "関数内\n";
	int hp = enemy.GetHp();
	enemy.Draw();
	std::cout << " " << std::endl;
}

int main(void)
{
	std::cout << "ゲーム開始" << std::endl;

	//Enemyを生成
	//Enemy*enemy=new Enemy();

	//スマートポインタでEnemyを生成
	std::unique_ptr<Enemy>enemy = std::make_unique<Enemy>();

	std::cout << "スポーン：モンスター\n";

	enemy->Draw();
	std::cout << " " << std::endl;

	//enemy->Update();

	ShowEnemy(*enemy);

	std::cout << "関数呼出し後\n";

	enemy->Draw();
	std::cout << " " << std::endl;

	/*if (enemy)
	{
		std::cout << "存在している" << std::endl;
	}
	else
	{
		std::cout << "存在していない" << std::endl;
	}*/


	//Enemyを解放
	//delete enemy;
	//enemy=nullptr;

	/*std::cout << "ゲーム開始\n";*/

	return 0;
}