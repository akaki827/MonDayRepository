#include<iostream>
#include"Character.h"
#include"Player.h"
#include"Boss.h"
#include"Enemy.h"

using namespace std;
int main()
{
	Player player("Player");
	Enemy enemy("セルレギオスに力の解放をしすぎた\nレベル：140　極限ジンオウガ");
	Boss boss("ゾーマ");

	cout << player.GetName() << endl;

	player.Attack();

	cout << enemy.GetName() << endl;

	enemy.Attack();

	cout << boss.GetName() << endl;

	boss.Attack();

	cout << player.GetName() << "は負けてしまった..." << endl;

	return 0;
}