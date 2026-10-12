#include<iostream>
#include"BattleManager.h"

using namespace std;
int main()
{
	BattleManager battle;

	string playerName;
	string enemyName;
	string bossName;

	cout << "名前を入力してください" << endl;

	cout << "playerの名前\n";
	cin >> playerName;

	cout << "enemyの名前\n";
	cin >> enemyName;

	cout << "bossの名前\n";
	cin >> bossName;

	cout << "贅沢な名だね！！今日からお前はAだよ！！" << endl;

	playerName = "A";

	cout << "勇者の名前はAになりました" << endl;

	battle.Battle(playerName,enemyName,bossName);

	return 0;
}