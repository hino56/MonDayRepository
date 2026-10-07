#include "Player.h"
using namespace std;


int Player::PlayerInput(int& num)
{
	cout << "【1】: 攻撃、【2】: 回復のどちらかを選択してください。\n";
	cout << endl;

	while (true)
	{
		cin >> num;

		if (num > MAX_NUM || num < MIN_NUM)
		{
			cout << "入力に誤りがあります。もう一度入力してください。\n";
			cout << endl;
		}
		else
		{
			break;
		}
	}
	return num;
}

void Player::PlayerTurn(int& PlayerHp, int& EnemyHp)
{
	int PJudge = PlayerInput(PJudge);

	if (PJudge == MIN_NUM)
	{
		JudgeDamage(PlayerHp, EnemyHp, true);
	}
	else
	{
		JudgeRecovery(PlayerHp, true);
	}
}