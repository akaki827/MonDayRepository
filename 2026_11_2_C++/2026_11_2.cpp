#include<iostream>
#include"namespace.h"
using namespace Variable;
using namespace Game;

int main(void)
{
	while (true)
	{
		PlayerInput(playerinput);

		EnemyInput(enemyinput, playerinput);

		Enemy(&playerhp, &enemyhp, playerinput, enemyinput);

		Player(&playerhp, &enemyhp, playerinput, enemyinput);

		if (playerhp == 0 || enemyhp == 0)
		{
			if (playerhp == 0)cout << "プレイヤーの敗北" << endl;
			else if (enemyhp == 0)cout << "プレイヤーの勝利" << endl;

			break;
		}
	}
}