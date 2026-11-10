#include "Enemy.h"
#include<iostream>
using namespace std;

//コンストラクタ
Enemy::Enemy(int HP)
{
	this->HP = HP;
}
Enemy::~Enemy() {}

void Enemy::ShowStatus() const
{
	cout << "Enemy HP: " << HP << endl;
}

void Enemy::Damage(int damage)
{
	HP -= damage;
}

int Enemy::GetHp() const
{
	return HP;
}