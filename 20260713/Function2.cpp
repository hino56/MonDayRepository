#include<iostream>
#include<cstdlib>
#include<ctime>
#include"Header2.h"
using namespace std;

//入力チェック
int InputCheck(int min, int max)
{
	//変数宣言
	int num;

	//正しい値が入力されるまでループさせる
	while (true)
	{
		//入力
		cin >> num;

		//値を超えたものを再度入力させる
		if (min > num || max < num)
		{
			cout << "入力に誤りがあります。再度入力してください。\n";
		}
		//入力が正しかった場合ループを終わらせる
		else
		{
			break;
		}
	}
	
	//入力した値に上書きする
	return num;
}

//じゃんけんの勝敗判定のための計算
int Judgement(int player, int cpu)
{
	//変数
	int Judg;
	//計算
	Judg = player - cpu;

	//計算結果の値に上書きする
	return Judg;
}

//レベルアップ判定
void LevelUp(int& exp, int& lv)
{
	//獲得する経験値量の生成
	int expAcquisition = rand() % EXPERIENCE_POINT_MAX + EXPERIENCE_POINT_MIN;
	
	//現在所有している経験値に生成された経験値を加算する
	exp += expAcquisition;

	//レベルアップの条件20経験値を満たしているかどうか
	if (exp >= THERSHOLD)
	{
		lv++;   //レベルの加算
		cout << "レベルが上がりました。" << endl;

		cout << "Lv:" << lv << "です。\n";

		//経験値の値が20以上で増え続けないためのマイナス計算
		exp -= 20;
	}
	//経験値が20を越えていない場合現在の経験値量表示
	else
	{
		cout << expAcquisition << "獲得しました。\n";
	}

}

//入力した数字に対する手の表示
void ShowHand(int hand)
{
	switch (hand)
	{
	case ROCK:   //(0)
		cout << "ぐー\n";
		break;
	case SCISSORS:   //(1)
		cout << "ちょき\n";
		break;
	case PAPER:   //(2)
		cout << "ぱー\n";
		break;
	default:   //どの「case」にも当てはまらなかった場合終了させる
		break;
	}
}

//これまで作ってきた関数のまとめ
void Game(int &exp, int &level)
{
	//変数宣言
	int player = 0;
	int enemy = 0;
	int judg = 0;

	//ルール説明
	cout << "じゃんけんゲームをしましょう。\n";
	cout << "選択す手は、「ぐー：0」　「ちょき：1」　「ぱー：2」とします。\n";
	cout << "勝と経験値が獲得でき、閾値を超えるとレベルが上がっていきます。\n";
	cout << "\n";

	cout << "==================== Player Trun ===================\n";
	//playerにInputCheckの値を代入
	player = InputCheck(INPUT_MIN, INPUT_MAX);
	//Cpuの手の生成
	enemy = rand() % HAND_NUMBER;

	cout << "PlayerHand\n";
	ShowHand(player);  //playerの選択した数字を文字に置き換える
	cout << "CpuHand\n";
	ShowHand(enemy);  //Cpuの生成した数字を文字に置き換える
	//「Judgement」の計算結果を「judg」に代入
	judg = Judgement(player, enemy);

	//計算結果から勝敗の判定
	if (judg == -1 || judg == 2)
	{
		cout << "PlayerWin\n";
		LevelUp(exp, level);
	}
	else if (judg == 0)
	{
		cout << "DRAW\n";
	}
	else
	{
		cout << "CpuWin\n";
	}

}
