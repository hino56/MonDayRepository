#pragma once
class ScoreManager
{
protected:
	//変数
	int currentScore = 0;
	int highScore = 0;

public:
	//関数
	void addPoints(int points);
	void resetScore();
	void updateHighScore();
	void displayScores();
};

