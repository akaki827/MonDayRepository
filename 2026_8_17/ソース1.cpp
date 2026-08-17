#include "20260817_prac3_header.h"
#include <iostream>
using namespace std;

void Card()
{
	int card[CARD_MAX];

	for (int i = 0; i <= CARD_MAX;i++)
	{
		for (int j = 0; j <= i; j++)
		{
			card[j] = i;
		}
	}
	for (int i = 0; i <= CARD_MAX; i++)cout << card[i] << "\n";
}