#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数
const int PITING_MIN = 0;
const int PITING_MAX = 3;
const int PROBABILITY = 4;
const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;

int main(void)
{
    //変数
    int ply, emy;
    int prod;
    int Strike = 0;
    int Ball = 0;
    int Out = 0;
    int Hit = 0;

    //乱数の初期化
    srand((unsigned int)time(NULL));

    //表示
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    //ゲームループ（アウトが三回以上かヒット四回以上なら終了）
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        //操作表示
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;
        //入力チェック
        while (true)
        {
            cin >> ply;

            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
                break;
            }
        }

        //関数の呼び出し(球種)
        PitingType(ply);

        //エネミーの乱数の設定
        emy = rand() % PROBABILITY;
        
        //確率の乱数の設定
        prod = rand() % PROBABILITY;

        //プレイヤーの出したボールと敵の予想が異なる場合
        if (ply != emy)
        {
            //25%の確率でボール
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            //75%の確率でボール
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }
        //プレイヤーの出したボールと敵の予想が同じだった場合
        else
        {
            //ストライクとボールの初期化
            Strike = 0;
            Ball = 0;

            //25%の確率でアウト
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            //75%の確率でヒット
            else
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }
        //ストライクまたはボールの回数が一定回数を超えると値を増やす
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            //ストライクの値を増やす
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            //アウトの値を増やす
            else
            {
                Hit++;
            }
            //ストライクとボールの値を初期化する
            Strike = 0;
            Ball = 0;
        }
        //表示
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    } 

    //関数の呼び出し(結果)
    Result(Out);

    return 0;
}