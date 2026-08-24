#include<iostream>
#include"2026_nakayama_prc3_h.h"

void ArryDouble(int* pArry){*pArry *= 2;}

void Game()
{
	int Arry[5] = { 10,20,30,40,50 };

	for (int i = 0; i < 5; i++)
	{
		int* pArry = Arry + i;

		cout << *pArry << "\n";

		ArryDouble(pArry);

		cout << *pArry << "\n\n";
	}
}