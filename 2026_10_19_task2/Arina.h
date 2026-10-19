#pragma once
#include "MagicalGirl.h"
using namespace std;

class Arina :public MagicalGirl
{
public:
	void Attack() override;
	void ShowProfile() override;
};