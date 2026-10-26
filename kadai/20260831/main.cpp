#include "ScoreManager.h"
#include <iostream>
using namespace std;

int main(void)
{
	ScoreManager score;
	int points;

	cout << "加算するポイントを入力してください。\n";
	cin >> points;

	score.addPoints(points);
	score.updateHighScore();
	score.displayScores();

	return 0;
}