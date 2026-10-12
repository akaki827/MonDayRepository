#include "Character.h"
#include<iostream>

Character::Character(std::string name)
{
	this->name = name;
}

std::string Character::GetName()
{
	return name;
}

void Character::Attack()
{
	std::cout << "エターナルフォースブリザード　相手は死ぬ" << std::endl;
}