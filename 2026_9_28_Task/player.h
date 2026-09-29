#pragma once
class Player
{
private:
	int player = 0;
public:
	/// <summary>
	/// プレイヤーの入力チェック
	/// </summary>
	/// <param name="playernum">入力した数字</param>
	void PlayerInput(int&playernum);
};