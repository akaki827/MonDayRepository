#pragma once
class MagicalGirl
{
public:
	/// <summary>
	/// 攻撃処理
	/// </summary>
	virtual void Attack() = 0;

	/// <summary>
	/// プロフィール関数
	/// </summary>
	virtual void ShowProfile();
};
