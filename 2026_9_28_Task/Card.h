#pragma once
#include "Config.h"
#include "player.h"

class Card
{
private:

	Player player;

	int playercard = 0;
	int enemycard = 0;
	int card;
	int totalcard[Config::CARDMAXNUM][Config::CARDMAXNUM];
public:
	void CardInit();
	void UseCard(int&card);
	void TotalCard();
	void PlayerCard();
	void EnemyCard(int enemycard);
	void Judgment(int playercard, int enemycard);
};

