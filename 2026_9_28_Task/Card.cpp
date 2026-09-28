#include "Card.h"
#include "Config.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

void Card::CardInit()
{
	for (int i = 0; i < Config::CARDNUM; i++)
	{
		for (int j = 0; j < Config::CARDMAXNUM; j++)
		{
			totalcard[i][j] = false;
		}
	}
	for (int i = 0; i <2 ; i++)
	{
		UseCard(card);

		playercard += card;

		cout << "playercard" << i + 1 << " : " << card << endl;

		UseCard(card);

		enemycard += card;

		cout << "enemycard" << i + 1 << " : " << card << endl;

		cout << "playercard " << playercard << "   enemycard " << enemycard << endl;
	}
}
void Card::UseCard(int&card)
{
	while (true)
	{
		int rCard = rand() % Config::CARDMAXNUM;

		for (int i = 0; i < Config::CARDNUM; i++)
		{
			if (totalcard[i][rCard] == false)
			{
				card = rCard + 1;
				break;
			}
		}
		break;
	}
}
void Card::TotalCard()
{

}
void Card::PlayerCard()
{
	int playernum = 0;

	player.PlayerInput(playernum);

	if (playernum == 0)
	{
		playercard += card;

		cout << "playercard" << " : " << card << endl;

		cout << "playercard " << playercard << "   enemycard " << enemycard << endl;
	}
}