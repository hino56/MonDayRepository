#include "Game.h"
#include"Enemy.h"
#include"Player.h"
#include"Character.h"
using namespace std;

void Game::GameLoop()
{
	Player player;
	Enemy enemy;

	int PlayerHp = MAX_HP;
	int EnemyHp = MAX_HP;
	/*int num;*/

	cout << "プレイヤーと敵が1対1で戦う、ターン制のバトルゲームを始めます。\n";
	cout << "先に100HPを削り切った方の勝利です。\n";
	cout << endl;

	while (true)
	{
		cout << "プレイヤーのHP : " << PlayerHp << endl;
		cout << "CPUのHP : " << EnemyHp << endl;

		player.PlayerTurn(PlayerHp, EnemyHp);
		enemy.EnemyTurn(PlayerHp, EnemyHp);


		if (PlayerHp <= MIN)
		{
			cout << "-------------------- You Lose --------------------\n";
			break;
		}
		else if (EnemyHp <= MIN)
		{
			cout << "-------------------- Player Win --------------------\n";
			break;
		}
	}

}