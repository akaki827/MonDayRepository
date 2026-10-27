#pragma once
class Enemy
{
private:
	int HP;
public:
	Enemy(int HP);
	~Enemy();

	/// <summary>
	/// ステータス表示
	/// <summary>
	void ShowStatus() const;
};