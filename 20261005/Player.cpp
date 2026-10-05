#include "Player.h"
using namespace std;

void Player::PlayerInput()
{
	int num;

	cout << "プレイヤーと敵が1対1で戦う、ターン制のバトルゲームです。\n";
	cout << "先に100HPを削り切った方の勝利です。\n";
	cout << endl;

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
}