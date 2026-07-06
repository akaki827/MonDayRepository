#pragma once
//定数
const int Healnum = 20;
const int MINNUM = 1;
const int MAXNUM = 2;
const int START_HELTH = 100;

/// <summary>
/// 入力チェック
/// </summary>
/// <param name="min">最小値</param>
/// <param name="max">最大値</param>
void InputCheck(int min, int max);
/// <summary>
/// 回復関数
/// </summary>
/// <param name="playerHealth">プレイヤーのHP</param>
/// <param name="num">プレイヤーの入力した数字</param>
void Heal(int& playerHealth, int& num);
/// <summary>ゲーム内容 </summary>
void Game();