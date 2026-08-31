#pragma once
class ScoreManager
{
private:
	int currentScore = 0;
	int highScore = 0;
public:
	/// <summary>
	/// 現在のスコアに指定されたポイントを加算
	/// </summary>
	/// <param name="points">ポイント</param>
	void addPoints(int points);

	/// <summary>
	/// 現在のスコアをリセット
	/// </summary>
	void resetScore();

	/// <summary>
	/// 現在のスコアを超えている場合、ハイスコア更新
	/// </summary>
	void updateHighScore();

	/// <summary>
	/// 現在のスコアとハイスコアを画面に表示
	/// </summary>
	void displayScore();	
};