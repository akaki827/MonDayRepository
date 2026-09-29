#include "Card.h"
#include "Config.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

//カードの初期配布
void Card::CardInit(int*playercard,int*enemycard)
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

		*playercard += card;

		cout << "playercard" << i + 1 << " : " << card << endl;

		UseCard(card);

		*enemycard += card;

		cout << "enemycard" << i + 1 << " : " << card << endl;

		cout << "playercard " << *playercard << "   enemycard " << *enemycard << endl;
	}
}
//使用済みカードに変更
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

				totalcard[i][rCard] = true;

				cardflag = true;

				break;
			}
		}
		break;
	}
}
//相手のカード
void Card::EnemyCard(int* playercard, int* enemycard)
{
	while (*enemycard < *playercard)
	{
		if (*enemycard < Config::ENEMYMINNUM || *playercard > *enemycard)
		{
			UseCard(card);

			*enemycard += card;

			cout << "enemycard" << " : " << card << endl;
		}
	}
}
//プレイヤーのカード
void Card::PlayerCard(int*playercard,bool*turnend)
{
	while (true)
	{
		int playernum = 0;

		player.PlayerInput(playernum);

		if (playernum == 0)
		{
			UseCard(card);

			*playercard += card;

			cout << "playercard" << " : " << card << endl;
		}
		else if (playernum == 1 || *playercard > Config::POINTMAX)
		{
			*turnend = true;
			break;
		}
	}
}	