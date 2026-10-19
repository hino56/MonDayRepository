#include"Battle_Manager.h"
#include<iostream>

void BattleManager::StartBattle(Character* character)
{
	cout << character->GetName() << endl;
	character->Attack();
}