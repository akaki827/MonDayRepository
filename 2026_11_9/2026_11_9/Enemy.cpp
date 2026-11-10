#include "Enemy.h"
#include<iostream>

//コンストラクタ
Enemy::Enemy() :hp(100){std::cout << "エネミーのコンストラクタ\n";}

//デストラクタ
Enemy::~Enemy(){std::cout << "エネミーのデストラクタ\n";}

//描画
void Enemy::Draw() const{std::cout << "エネミーの描画" << std::endl;}