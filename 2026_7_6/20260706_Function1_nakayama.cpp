#include <iostream>
#include "20260706_Header1_nakayama.h"

using namespace std;

//入力チェック
void InputCheck(int min, int max,int&num)
{
	//入力チェック
	while (true)
	{
		//入力
		cout << "1で回復２で回復をしません。数字が入力してください。" << endl;
		cin >> num;
		if (min > num || max < num)
		{
			cout << "入力に誤りがあります。再度入力してください。" << endl;
		}
		else
		{
			break;
		}
	}
}

void Heal(int&playerHealth,int&num)
{
	if (num == MINNUM)
	{
		playerHealth += Healnum;
		cout << "２０回復した！";
		cout << "\n現在のHPは" << playerHealth << "です\n";
	}
	if (num == MAXNUM)
	{
		cout << "強がりな奴ですね";
		cout << "\n現在のHPは" << playerHealth << "です\n";
	}
}

void Game()
{
	int playerHealth = START_HELTH;
	int num = 0;

	while (true)
	{
		InputCheck(MINNUM, MAXNUM,num);

		Heal(playerHealth, num);
	}
}