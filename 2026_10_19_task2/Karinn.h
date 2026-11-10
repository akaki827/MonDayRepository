#pragma once
#include "MagicalGirl.h"
using namespace std;

class Karinn :public MagicalGirl
{
public:
	void Attack() override;
	void ShowProfile() override;
};