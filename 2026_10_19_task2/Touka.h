#pragma once
#include "MagicalGirl.h"
using namespace std;

class Touka :public MagicalGirl
{
public:
	void Attack() override;
	void ShowProfile() override;
};