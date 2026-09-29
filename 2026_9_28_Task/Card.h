#pragma once
#include "Config.h"
#include "player.h"
class Card
{
private:

	Player player;

	int card;
	int totalcard[Config::CARDMAXNUM][Config::CARDMAXNUM];
	bool cardflag = false;
public:
	/// <summary>
	/// カードの初期化
	/// </summary>
	/// <param name="playercard">プレイヤーのカード</param>
	/// <param name="enemycard">エネミーのカード</param>
	void CardInit(int*playercard,int*enemycard);
	/// <summary>
	/// 使用済みカードに変更
	/// </summary>
	/// <param name="card">配布するカード</param>
	void UseCard(int&card);
	/// <summary>
	/// プレイヤーのカード
	/// </summary>
	/// <param name="playercard">プレイヤーのカード</param>
	/// <param name="turnend">ターンが負えるかのフラグ</param>
	void PlayerCard(int*playercard,bool*turnend);
	/// <summary>
	/// 相手のカード
	/// </summary>
	/// <param name="playercard">プレイヤーのカード</param>
	/// <param name="enemycard">相手のカード</param>
	void EnemyCard(int*playercard,int*enemycard);
};

