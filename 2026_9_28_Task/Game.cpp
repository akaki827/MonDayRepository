#include "Game.h"
#include <iostream>

using namespace std;

void Game::Gameroop()
{
	card.CardInit(Pplayercard, Penemycard);

	while (true)
	{
		//プレイヤーのターン
		card.PlayerCard(Pplayercard,Penemycard,Pturnend);

		if (playercard > Config::POINTMAX)
		{
			std::cout << "BOOM player lose\n";
			break;
		}

		//エネミーのターン
		card.EnemyCard(Pplayercard, Penemycard);

		if (enemycard > Config::POINTMAX)
		{
			std::cout << "BOOM player win\n";
			break;
		}

		//現在の結果
		cout << "playercard " << playercard << "   enemycard " << enemycard << endl;

		//ターン終了時の現在の結果
		if (turnend == true)
		{
			if (playercard > enemycard)
			{
				std::cout << "player win\n";
				break;
			}
			else if (enemycard > playercard)
			{
				std::cout << "player lose\n";
				break;
			}
			else
			{
				std::cout << "drow\n";
				break;
			}
		}

	}


}