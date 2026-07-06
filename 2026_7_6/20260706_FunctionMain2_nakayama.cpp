#include <iostream>
#include<cstdlib>
#include<ctime>
#include<format>
#include "20260706_HeaderMain2_nakayama.h"

using namespace std;

//クラス
enum jyanken
{
	グー,
	チョキ,
	パー
};

int InputCheck(int min, int max)
{
	//変数
	int player;
	//入力チェック
	while (true)
	{
		//入力
		cout << "0～2までの数字が入力してください。" << endl;
		cin >> player;
		if (min > player || max < player)
		{
			cout << "入力に誤りがあります。再度入力してください。" << endl;
		}
		else
		{
			break;
		}

	}

	return player;
}
//ハンドサイン表示
void HandSingPrint(int player, int enemy)
{
	//プレイヤーの出した手表示
	switch (player)
	{
	case グー:
		cout << "あなたの出した手はグーです\n";
		break;
	case チョキ:
		cout << "あなたの出した手はチョキです\n";
		break;
	case パー:
		cout << "あなたの出した手はパーです\n";
		break;
	}
	//相手の出した手表示
	switch (enemy)
	{
	case グー:
		cout << "相手の出した手はグーです\n";
		break;
	case チョキ:
		cout << "相手の出した手はチョキです\n";
		break;
	case パー:
		cout << "相手の出した手はパーです\n";
		break;
	}
}
void Game()
{
	//変数宣言
	int player;
	int enemy;
	int level = 1;
	int exp = 0;
	int roundcount = 0;
	int rondomexp;

	while (level < LIMITELEVEL)
	{
		enemy = rand() % MAX;


		cout << "===============GameStart================" << endl;
			roundcount++;

			cout << roundcount << "回目です\n";

			player = InputCheck(MIN, MAX);

			HandSingPrint;

			//勝敗チェック
			if (player == enemy)
			{
				cout << "あいこ" << endl;
			}
			else if (player - enemy == -1 or player - enemy == 2)
			{
				cout << "勝利" << endl;
				rondomexp = rand() % RONDOMEXP;
				rondomexp++;
				cout << format("====================\nLV:{}\nEXP:{}\n====================\n1:グー　2:チョキ　3:パー\n入力:{}\n勝利！！\n経験値を{}獲得しました！", level, exp, player, rondomexp);
				exp += rondomexp;
				cout << "\n現在EXP" << exp << endl;
			}
			else
			{
				cout << "敗北" << endl;
			}
			if (exp > LIMITEEXP)
			{
				level++;
				exp = 0;
				cout << "\nレベルアップ！Lv" << level << "になりました！！";
			}
	}
}