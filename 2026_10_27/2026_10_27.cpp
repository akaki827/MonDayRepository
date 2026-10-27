#include<iostream>
#include"Enemy.h"
#include"Config.h"
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	//—”‚Ì‰Šú‰»
	srand((unsigned int)time(NULL));

	vector<Enemy> enemies;

	cout << "“G‚Ì”‚Í" << enemies.size() << endl;
	
	//—v‘f”‚Ì“o˜^
	for (int i = 0; i < Config::ROOP_NUM; i++)
	{
		int hpnum = rand() % Config::HP_MAX + Config::HP_MIN;
		enemies.push_back(Enemy(hpnum));
	}
	//“o˜^‚µ‚½î•ñ‚Ì•\¦
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowStatus();
	}

	//UŒ‚
	int choisenum = 0;

	cout << "UŒ‚‚·‚é“G‚ğ‘I‘ğ" << endl;

	cin >> choisenum;

	int damagenum = rand() % Config::DAMAGE_MAX + Config::DAMAGE_MIN;

	cout << "—^ƒ_ƒ‚Í" << damagenum << endl;

	enemies[choisenum].Damage(damagenum);

	int i = 0;

	for (Enemy& enemy : enemies)
	{
		if (enemies[choisenum].GetHp() <= 0)enemies.erase(enemies.begin() + i);

		i++;
	}

	for (const Enemy& enemy : enemies)
	{
		enemy.ShowStatus();
	}

	return 0;
}