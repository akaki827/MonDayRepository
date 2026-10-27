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

	//—v‘f”‚Ì“o˜^
	for (int i = 0; i < Config::ROOP_NUM; i++)
	{
		int num = rand() % Config::HP_MAX + Config::HP_MIN;
		enemies.push_back(Enemy(num));
	}
	//“o˜^‚µ‚½î•ñ‚Ì•\¦
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowStatus();
	}
	cout << "“G‚Ì”‚Í" << enemies.size() << endl;

	return 0;
}