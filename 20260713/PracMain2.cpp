#include<iostream>
#include<cstdlib>
#include<ctime>
#include"Header2.h"
using namespace std;

int main(void)
{
	//変数宣言
	int exp = 0;
	int level = 1;

	//乱数の初期化
	srand((unsigned int)time(NULL));

	//無限にゲームをループさせる
	while (true)
	{
		Game(exp,level);
	}

	return 0;
}

//コードのコメント書いてみたのですがあっていますか？