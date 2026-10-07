#pragma once
#include"Config.h"
class Character
{
protected:
	int atk = 0,def = 0,agi = 0;
	int randomatk = 0, randomheal = 0;
	int heal = 0;
public:
	void CharacterInit();
	void Attack(int attackCharacter,int characteragi,int charactervit,int characterdef);
	void Heal(int charactervit);
};