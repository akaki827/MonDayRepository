#pragma once
#include"Character.h"

class Player;

class Enemy :public Character
{
private:
	int Enemy_atk;
	int enemyinput = 0;
	Character character;
	Player* player;

public:
	int Enemy_agi;
	int Enemy_def;
	int Enemy_vit = Config::VIT;

	void EnemyInit(Player*p);
	void EnemyInput();
};

