#pragma once
#include "MagicalGirl.h"
using namespace std;

class Wasu :public MagicalGirl
{
public:
	void Attack() override;
	void ShowProfile() override;
};