#include "BattleManager.h"
#include"Character.h"
#include"Player.h"
#include"Boss.h"
#include"Enemy.h"
#include<iostream>

using namespace std;

void BattleManager::Battle(string playerName,string enemyName,string bossName)
{
	Player player(playerName);
	Enemy enemy(enemyName);
	Boss boss(bossName);

	cout << player.GetName() << endl;

	player.Attack();

	cout << enemy.GetName() << endl;

	enemy.Attack();

	cout << boss.GetName() << endl;

	boss.Attack();

	cout << player.GetName() << "‚Í•‰‚¯‚Ä‚µ‚Ü‚Á‚½..." << endl;

}