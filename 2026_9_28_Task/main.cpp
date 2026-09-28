#include<iostream>
#include"Card.h"
int main(void)
{
	Card card;

	srand((unsigned int)time(NULL));

	card.CardInit();

	card.PlayerCard();

	return 0;
}