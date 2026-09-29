#pragma once
#include "Card.h"
class Game
{
private:
	Card card;

	//変数
	int playercard = 0;
	int enemycard = 0;
	bool turnend = false;

	//ポインタ変数
	int*Pplayercard = &playercard;
	int*Penemycard = &enemycard;
	bool* Pturnend = &turnend;

public:
	/// <summary>
	/// ゲームループ
	/// </summary>
	void Gameroop();
};

