#pragma once
#include<iostream>

using namespace std;

namespace Config
{
	const int START_HP = 100;
	const int PLAYER_DAMAGE = 30;
	const int ENEMY_DAMAGE = 20;
	const int PLAYER_DEF = 10;
	const int PLAYER_HEAL = 20;
	const int ENEMY_MOVE = 1;
	const int PLAYERINPUT_MIN = 1;
	const int PLAYERINPUT_MAX = 3;

	const int ATTACK = 1;
	const int GARD = 2;
	const int HEAL = 3;
}
namespace Variable
{
	int playerhp = Config::START_HP;
	int enemyhp = Config::START_HP;
	int playerinput = 0;
	int enemyinput = 0;
}
namespace Game
{
	/// <summary>
	/// プレイヤーの行動入力
	/// </summary>
	/// <param name="playerInput">プレイヤーの行動入力</param>
	void PlayerInput(int& playerInput)
	{
		while (true)
		{
			cout << "数字を入力してください" << endl;
			
			cin >> playerInput;
			if (playerInput < Config::PLAYERINPUT_MIN || playerInput > Config::PLAYERINPUT_MAX)
			{
				cout << "数字が違います" << endl;
			}
			else break;
		}
	}
	/// <summary>
	/// エネミーの行動入力
	/// </summary>
	/// <param name="enemyInput">エネミーの行動入力</param>
	/// <param name="playerInput">プレイヤーの行動結果</param>
	void EnemyInput(int& enemyInput,int playerInput)
	{
		if (playerInput == Config::ATTACK)
		{
			enemyInput = Config::GARD;
		}
		else if (playerInput == Config::GARD)
		{
			enemyInput = Config::ATTACK;
		}
		else if (playerInput == Config::HEAL)
		{
			enemyInput = Config::ATTACK;
		}
	}
	/// <summary>
	/// プレイヤー
	/// </summary>
	/// <param name="playerhp">プレイヤーのHP</param>
	/// <param name="enemyhp">エネミーのHP </param>
	/// <param name="playerinput">プレイヤーの行動結果</param>
	/// <param name="enemyinput">エネミーの行動結果</param>
	void Player(int*playerhp,int*enemyhp,int playerinput,int enemyinput)
	{
		if (playerinput == Config::ATTACK)
		{
			if (enemyinput != Config::GARD)
			{
				*enemyhp -= Config::PLAYER_DAMAGE;

				cout << Config::PLAYER_DAMAGE << "のダメージをエネミーに与えた！" << endl;
			}
			cout << "防御された！！" << endl;
		}
		else if (playerinput == Config::GARD)
		{
			if (enemyinput == Config::ATTACK)
			{
				*playerhp += Config::PLAYER_DEF;
				cout << "防御した！！" << Config::ENEMY_DAMAGE - Config::PLAYER_DEF << "のダメージ！！" << endl;
			}

		}
		else if (playerinput == Config::HEAL)
		{
			*playerhp += Config::PLAYER_HEAL;

			cout << "HPを" << Config::PLAYER_HEAL << "回復した！！";
		}
		cout << "現在のプレイヤーのHPは" << *playerhp << endl;

	}
	/// <summary>
	/// エネミー
	/// </summary>
	/// <param name="playerhp">プレイヤーのHP</param>
	/// <param name="enemyhp">エネミーのHP</param>
	/// <param name="playerinput">プレイヤーの行動結果</param>
	/// <param name="enemyinput">エネミーの行動結果</param>
	void Enemy(int* playerhp, int* enemyhp, int playerinput, int enemyinput)
	{
		if (enemyinput == Config::ATTACK)
		{
			*playerhp -= Config::ENEMY_DAMAGE;

			cout << "エネミーの攻撃" << endl;
		}
		else if (enemyinput == Config::GARD)
		{
			//何も起こらない（無敵）
		}
		cout << "現在のエネミーのHPは" << *enemyhp << endl;
	}

}