#include "Player.h"
#include "Enemy.h"
#include "Boss.h"
#include"Battle_Manager.h"
#include<iostream>

int main(void)
{
	Player player("キルア");
	Enemy enemy("執事陣営");
	Boss boss("イルミ");

	BattleManager manager;

	manager.StartBattle(&player);
	manager.StartBattle(&enemy);
	manager.StartBattle(&boss);

	return 0;
}