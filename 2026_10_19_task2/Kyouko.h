#pragma once
#include "MagicalGirl.h"
using namespace std;

class Kyouko :public MagicalGirl
{
public:
	void Attack() override;
	void ShowProfile() override;
};