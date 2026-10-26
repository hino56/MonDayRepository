#include "ScoreManager.h"
#include<iostream>
using namespace std;

void ScoreManager::resetScore()
{
	currentScore = 0;
}

void ScoreManager::addPoints(int points)
{
	currentScore += points;
}

void ScoreManager::updateHighScore()
{
	if (highScore < currentScore)
	{
		highScore = currentScore;
	}
}

void ScoreManager::displayScores()
{
	cout << "現在のスコア" << currentScore << endl;
	cout << "ハイスコア" << highScore << endl;
}