#include<iostream>
#include<memory>
#include"Enemy.h"
int main(void)
{
	//unique_ptrでEnemyを生成
	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

	enemy->Draw();

	return 0;
}