#include "Enemy.h"
#include<iostream>
using namespace std;

//コンストラクタ
Enemy::Enemy(int HP)
{
	this->HP = HP;
}

//
Enemy::~Enemy() {}

void Enemy::ShowStatus() const
{
	cout << "Enemy HP: " << HP << endl;
}