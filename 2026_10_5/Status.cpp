#include "Status.h"
#include "Config.h"
#include <ctime>
#include <cstdlib>
void Status::StatusInit()
{
	vit = Config::VIT;
	def = rand() % Config::DEF_MAX;
	atk = rand() % Config::ATK_MAX;
	agi = rand() % Config::AGI_MAX;
}