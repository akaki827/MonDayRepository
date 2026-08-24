#include <iostream>
using namespace std;

int main(void) 
{
    //変数の初期化
    int a = 0;

    //pにaのアドレスを持たせる
    int* p = &a;

    //aの初期値を表示
    cout << "aの初期値: " << a << endl;

    //aのアドレスを持ったpを10にしたことで元にあるaにも反映される
    *p = 10;

    //pという中間を経て変わったaの値を表示
    cout << "aの変更後の値: " << a << endl;

    return 0;
}