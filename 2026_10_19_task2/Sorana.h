#pragma once
#include "MagicalGirl.h"
using namespace std;

class Sorana :public MagicalGirl
{
public:
	void Attack() override;
	void ShowProfile() override;
};