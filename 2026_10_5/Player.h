#pragma once
#include"Status.h"
class Player:public Status
{
protected:
	int Player_atk;
	int Player_def;
	int Player_agi;
	int Player_vit;

	int playerinput = 0;
public:
	void PlayerInit();
	void PlayerStatus();
	void PlayerInput();
	void Attak();
	void Heal();
};

