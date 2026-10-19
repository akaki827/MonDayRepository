#pragma once
#include "MagicalGirl.h"
using namespace std;

class Renn :public MagicalGirl
{
public:
	void Attack() override;
	void ShowProfile() override;
};