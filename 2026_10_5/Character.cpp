#include "character.h"
#include "Config.h"
#include <cstdlib>
#include<iostream>

using namespace std;

void Character::CharacterInit()
{
	def = (rand() % Config::DEF_MAX) +1;
	atk = (rand() % Config::ATK_MAX) +1;
	agi = (rand() % Config::AGI_MAX) +1;
}
void Character::Attack(int characteratk,int characteragi,int charactervit,int characterdef)
{
	if (randomatk > characteragi)
	{
		cout << "Attack\n";

		charactervit -= characteratk + randomatk - characterdef;

		cout << "damage" << characteratk + randomatk - characterdef << " HP" << charactervit << endl;
	}
	else
	{
		cout << "NO Attack\n";
	}
}
void Character::Heal(int charactervit)
{
	heal = (rand() % Config::HEAL_MAX) + 1;

	charactervit += heal;

	if (charactervit > Config::VIT)charactervit = Config::VIT;

	cout << "heal " << heal << " HP" << charactervit << endl;
}