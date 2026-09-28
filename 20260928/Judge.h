#pragma once
class Judge
{
public:
	void PlayerJudge();

	void CpuJudge();

	const int INIT_CARD = 2;

	const int MAX_CARD = 11;
	const int ADD_NUM = 1;

	const int MAX_DRAW = 1;
	const int MIN_DRAW = 0;

	const int LOOS_NUM = 22;
	const int WIN_NUM = 21;

	int isDraw = false;

private:

};

