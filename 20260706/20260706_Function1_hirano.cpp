#include<iostream>
#include"20260706_Header1_hirano.h"
using namespace std;

//入力チェック
void InputCheck(int &answer, int min,int max)
{
	while (true)
	{
		//入力
		cin >> answer;

		if (answer <= MIN || answer > MAX)
		{
			cout << "入力した数字に誤りがあります。再度入力してください。" << endl;
		}
		else
		{
			break;
		}
	}

}

//回復判定
void Heal(int& heal)
{
	heal += 20;
	cout << "HPが20回復しました。" << endl;
}

void Game()
{
	int playerHp = PLAYER_HP;
	int answer;

	cout << "HPを回復するかどうかを数字を入力して決めてください。" << endl;
	cout << "数字は、「Yes：1」「No：2」とします。" << endl;

	InputCheck(answer,MIN,MAX);

	if (answer == 1)
	{
		Heal(playerHp);
	}
	else
	{
		playerHp;
	}

	//体力表示
	cout << "現在のHPは、" << playerHp << "です。" << endl;
}
