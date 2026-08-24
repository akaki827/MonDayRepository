#include <iostream>
using namespace std;

int main(void)
{
	//”z—ñ
	int ary[5] = {0,20,33,44,63};
	int* pAry;

	//pAry‚Í”z—ñ‚Ìæ“ª‚ğw‚·
	pAry = ary;
	for (int i = 0; i < 5; i++)
	{
		cout << "&ary[" << i << "]" << pAry << endl;
		cout << "pAry : " << pAry + i << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> *(pAry + i);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "pAry : " << *(pAry + i) << endl;
	}

	return 0;
}