#include "Judge.h"
#include<iostream>
using namespace std;

void Judge::PlayerJudge(int* totalCard)
{
	int PlayerCard;
	int draw;

	for (int i = 0;i < INIT_CARD;i++)
	{
		while (true)
		{
			PlayerCard = rand() % MAX_CARD + ADD_NUM;

			cout << PlayerCard;
			totalCard += PlayerCard;

			if (*totalCard == LOOS_NUM)
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}

	cout << "プレイヤーの手札は、" << totalCard << "です。" << endl;
	cout << "カードを引く場合は、『0』引かない場合は、『1』を入力してください。\n";

	while (true)
	{
		while (true)
		{
			cin >> draw;

			if (draw > MAX_DRAW || draw < MIN_DRAW)
			{
				cout << "入力した数字に誤りがあります。再度入力してください。\n";
			}
			else
			{
				break;
			}
		}

		if (draw == MIN_DRAW)
		{
			PlayerCard = rand() % MAX_CARD + ADD_NUM;

			totalCard += PlayerCard;

			if (*totalCard >= LOOS_NUM)
			{
				break;
			}

			if (*totalCard == WIN_NUM)
			{
				break;
			}

			cout << "現在のカードの合計は、" << totalCard << "です。\n";
			cout << "まだカードを引きますか？【YES:0】【NO:1】\n";
			cout << endl;
		}
		else
		{
			break;
		}

	}

}

void Judge::CpuJudge()
{
	int CpuCard;
	int CpuTotalCard;
	int CpuDraw;
	int totalCard;

	PlayerJudge(&totalCard);

	for (int i = 0;i < INIT_CARD;i++)
	{
		while (true)
		{
			CpuCard = rand() % MAX_CARD + ADD_NUM;

			cout << CpuCard;
			CpuTotalCard += CpuCard;

			if (CpuTotalCard == LOOS_NUM)
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}

	while (true)
	{
		if (CpuDraw < totalCard)
		{
			CpuCard = rand() % MAX_CARD + ADD_NUM;

			CpuTotalCard += CpuCard;

			if (CpuTotalCard >= LOOS_NUM)
			{
				break;
			}

			if (CpuTotalCard == WIN_NUM)
			{
				break;
			}
		}
		else
		{
			break;
		}
	}
}