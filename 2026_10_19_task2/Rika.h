#pragma once
#include "MagicalGirl.h"
using namespace std;

class Rika :public MagicalGirl
{
public:
	void Attack() override;
	void ShowProfile() override;
};