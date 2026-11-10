#include "Enemy2.h"
#include<iostream>

//コンストラクタ
Enemy2::Enemy2() :hp(100) { std::cout << "エネミーが出現しました。\n"; }

//デストラクタ
Enemy2::~Enemy2() { std::cout << "エネミーを破棄しました。。\n"; }

//HPを取得
int Enemy2::GetHp() const { return hp; }

void Enemy2::Draw() const { std::cout << "HP:" << hp << std::endl; }