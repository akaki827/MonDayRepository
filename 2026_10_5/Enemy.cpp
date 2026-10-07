#include "Enemy.h"
#include"Player.h"
#include <cstdlib>
#include<iostream>

using namespace std;

void Enemy::EnemyInit(Player*p)
{
	Enemy_def = def;
	Enemy_agi = agi;
	Enemy_atk = atk;

	player = p;
}
void Enemy::EnemyInput()
{
	enemyinput = (rand() % 2) + 1;

	cout << "Enemy Turn" << enemyinput << endl;

		if (enemyinput == Config::ATTAK)
		{
			character.Attack(Enemy_atk, player->Player_agi, player->Player_vit, player->Player_def);
		}
		else if (enemyinput == Config::HEAL)
		{
			character.Heal(Enemy_vit);
		}

}