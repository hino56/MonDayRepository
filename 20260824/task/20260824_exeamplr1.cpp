#include <iostream>
using namespace std;

int main(void)
{
    //変数
    int a = 0;
    int* p = &a;   //変数「p」に「a」のアドレスを持たせる

    //変数の中身を表示
    cout << "aの初期値: " << a << endl;

    //ポインタ変数「p」から「a」にアドレスを変更
    *p = 10;

    cout << "aの変更後の値: " << a << endl;

    return 0;
}

