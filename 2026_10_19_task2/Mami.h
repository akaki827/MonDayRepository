#pragma once
#include "MagicalGirl.h"
using namespace std;

class Mami :public MagicalGirl
{
public:
	void Attack() override;
	void ShowProfile() override;
};