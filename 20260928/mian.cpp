#include<iostream>
#include "Judge.h"

int main(void)
{
	srand((unsigned int)time(NULL));

	Judge judge;

	judge.PlayerJudge();
	judge.CpuJudge();

	return 0;
}