#include "Character.h"
#include<iostream>
using namespace std;

void Character::JudgeDamage(int& PlayerHp, int& EnemyHp, bool isPlayer)
{
	int judge = RandomAt() - Evasion();
	int attack = Attack();
	int defense = Defense();
	int damage = attack + judge - defense;

	if (damage < 0)
	{
		damage = 0;
	}

	/*PlayerHp = player.PlayerTurn(PlayerHp, EnemyHp);
	EnemyHp = enemy.EnemyTurn(PlayerHp, EnemyHp);*/

	if (isPlayer)
	{
		cout << "==================== PLAYER TURN ====================\n";
		if (judge < MIN_AT_NUM)
		{
			cout << "プレイヤーの攻撃は回避されました。\n";
			cout << endl;
		}
		else
		{
			EnemyHp -= damage;
			cout << "プレイヤーの攻撃力は、【" << (attack + judge) << "】です。\n";
			cout << "防御力は、【" << defense << "】です。\n";
			cout << "実際のダメージは、【" << damage << "】です。\n";
			cout << "よってCPUの残り体力は、【" << EnemyHp << "】です。\n";
			cout << endl;
		}
	}
	else
	{
		cout << "===================== CPU TURN =====================\n";
		if (judge < MIN_AT_NUM)
		{
			cout << "CPUの攻撃を回避しました。\n";
			cout << endl;
		}
		else
		{
			PlayerHp -= damage;
			cout << "CPU攻撃力は、【" << (attack + judge) << "】です。\n";
			cout << "防御力は、【 " << defense << " 】です。\n";
			cout << "実際のダメージは、【 " << damage << " 】です。\n";

			cout << "よってプレイヤーの残り体力は、【" << PlayerHp << "】です。\n";
			cout << endl;
		}
	}
}

void Character::JudgeRecovery(int& NowHp, bool isPlayer)
{
	if (isPlayer)
	{
		cout << "==================== PLAYER TURN ====================\n";
	}
	else
	{
		cout << "===================== CPU TURN =====================\n";
	}

	if (NowHp >= HP)
	{
		cout << "HPが最大なので回復しません。\n";
	}

	int recovery = Recovery();

	if (recovery > HP - NowHp)
	{
		recovery = HP - NowHp;
	}

	NowHp += recovery;

	if (isPlayer)
	{
		cout << "プレイヤーの回復量は、【" << recovery << "】です。\n";
		cout << "現在のプレイヤーHPは、【" << NowHp << "】です。\n";
		cout << endl;
	}
	else
	{
		cout << "Cpuの回復量は、【" << recovery << "】です。\n";
		cout << "現在のCpuHPは、【" << NowHp << "】です。\n";
		cout << endl;
	}

}