#pragma once
#include "MagicalGirl.h"
using namespace std;

class Oriko :public MagicalGirl
{
public:
	void Attack() override;
	void ShowProfile() override;
};