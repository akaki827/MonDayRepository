#pragma once
#include"Character.h"

class Enemy;

class Player:public Character
{
private:
	int Player_atk;
	int playerinput = 0;
	Character character;
	Enemy* enemy;
public:
	int Player_agi;
	int Player_def;
	int Player_vit = Config::VIT;


	void PlayerInit(Enemy*p);
	void PlayerInput(int playerinput);
};

