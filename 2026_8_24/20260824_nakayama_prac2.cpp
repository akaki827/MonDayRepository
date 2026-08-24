#include<iostream>
using namespace std;

int main()
{
	int numbers[5] = { 35,82,17,96,54 };
	int* pNum = numbers;
	int* pNum2;

	for (int i = 0; i < 5; i++)
	{
		pNum2 = numbers + i;

		if (*pNum < *pNum2)pNum = pNum2;
	}
	cout << *pNum;
	return 0;
}