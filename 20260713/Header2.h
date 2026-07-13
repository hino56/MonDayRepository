#pragma once

//定数
const int INPUT_MIN = 0;
const int INPUT_MAX = 2;
const int HAND_NUMBER = 3;
const int EXPERIENCE_POINT_MIN = 1;
const int EXPERIENCE_POINT_MAX = 15;
const int THERSHOLD = 20;

//列挙型(手の値を用意する)
enum HAND
{
	ROCK,   //(0)
	SCISSORS,   //(1)
	PAPER   //(2)
};

///<sumary>
///入力チェック関数
/// </summary>
/// <param name="min">最小値</param>
/// <param name="max">最大値</param>
/// <returns>入力した値</returns>
int InputCheck(int min, int max);

///<sumary>
///判定関数
/// </summary>
/// <param name="player">Playerが入力した値</param>
/// <param name="cpu">Cpuが選択した値</param>
/// <returns>結果</returns>
int Judgement(int player, int cpu);

/// <sumary>
/// レベルアップ関数
/// </summary>
/// <param name="exp">経験値</param>
/// <param name="lv">レベル</param>
void LevelUp(int& exp, int& lv);

/// ///<sumary>
/// ゲーム関数
/// </summary>
/// <param name="exp">経験値</param>
/// <param name="level">レベル</param>
void Game(int& exp, int& level);

/// ///<sumary>
/// 入力した手を表示
/// </summary>
/// <param name="hand">入力した手</param>
void ShowHand(int hand);