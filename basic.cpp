#include <iostream>
using namespace std;
int main()
{
    cout << "----宣言, 定義----" << endl;
    extern int num; //宣言：変数名の使用を宣言
    int num2; //定義：変数のメモリ領域をかくほ
    int num3 = 1; // 初期化
    // cout << &num << endl;  // コンパイルエラー
    cout << &num2 << ',' << &num3 << std::endl;

    cout << "----3項演算子----" << endl;
    cout << (2 < 1 ? "true" : "false") << endl;

    cout << "----符号なし整数の演算の注意----" << endl;
    // 符号なし整数では、0よりn小さい数はunsigned型における最大値-nとなる
    // int と unsignedの演算では unsignedに変換されて計算される
    unsigned a = 1;
    int b = -3;
    for (int i=0; i<5; i++){
        cout << i << " --> " << unsigned(-i) << endl;
    };
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "b --> " << unsigned(b) << endl;
    cout << "a + b = " << a + b << endl;

    cout << "----enum class----" << endl;
    enum class Dog{
        Poodle,     //  0
        Shiba,      //  1
        Chihuahua,  //  2
        Bulldog   //  3
    };
    Dog Poodle = Dog::Poodle;
    // std::cout << Dog::Poodle << std::endl;

    return 0;
}