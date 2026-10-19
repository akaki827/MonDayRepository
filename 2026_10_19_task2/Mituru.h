#pragma once
#include "MagicalGirl.h"
using namespace std;

class Mituru :public MagicalGirl
{
public:
	void Attack() override;
	void ShowProfile() override;
};