#include "Player.h"
#include "Config.h"
#include <iostream>

using namespace std;

void Player::PlayerInit()
{
	Player_vit = vit;
	Player_def = def;
	Player_agi = agi;
	Player_atk = atk;
}
void Player::PlayerInput()
{
	while (true)
	{
		cin >> playerinput;
		if (playerinput == Config::ATTAK)
		{
			Attak();
			break;
		}
		else if (playerinput == Config::HEAL)
		{
			Heal();
			break;
		}
		else "‚»‚ê‚Íˆá‚¤";
	}
}
void Player::Attak()
{
	
}
void
Player::Heal()
{

}