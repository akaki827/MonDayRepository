#include<iostream>
#include<memory>
#include"Enemy2.h"

void ShowEnemy(const Enemy2& enemy)
{
	//エネミーの描画
	enemy.Draw();
}

int main(void)
{
	//unique_ptrでEnemyを生成
	std::unique_ptr<Enemy2> enemy = std::make_unique<Enemy2>();

	ShowEnemy(*enemy);

	return 0;
}