#pragma once
#include"Character.h"
#include"Player.h"
#include"Enemy.h"
#include"Config.h"
class Game
{
private:
	Character character;
	Player player;
	Enemy enemy;
	int playerinput;
public:
	void GameRoop();
};