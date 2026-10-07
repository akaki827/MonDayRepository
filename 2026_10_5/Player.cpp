#include "Player.h"
#include "Enemy.h"
#include "Config.h"
#include <iostream>

using namespace std;

void Player::PlayerInit(Enemy*e)
{
	Player_def = def;
	Player_agi = agi;
	Player_atk = atk;

	enemy = e;
}
void Player::PlayerInput(int playerinput)
{
	while (true)
	{
		cout << "プレイヤーの行動を入力してください\n";

		cin >> playerinput;
		if (playerinput == Config::ATTAK)
		{
			character.Attack(Player_atk,enemy->Enemy_agi,enemy->Enemy_vit,enemy->Enemy_def);
			break;
		}
		else if (playerinput == Config::HEAL)
		{
			character.Heal(Player_vit);
			break;
		}
		else cout << "それは違う\n";
	}
}