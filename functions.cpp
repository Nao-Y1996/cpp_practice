#include <iostream>
using namespace std;

// 関数の定義
int Plus(int a, int b){
    return a + b;
};

// inline関数の定義
// 【呼び出し場所に埋め込まれることで短い関数の呼び出しにかかるオーバヘッドをなくすことができる】
// ただし、inlineを指定すれば必ずインライン関数になるわけではなく必ずコンパイラの制限に従う必要がある（コンパイラのマニュアルを参照）
// インライン展開できなかった場合は、通常の関数として扱われます
inline int max(int a, int b){
    if (a < b){
        return b;
    }
    else{
        return a;
    }
};

// 関数宣言
// このように書いておけばmainの後で定義しても使えるようななる
int Multiple(int a, int b);

// デフォルト引数は右から設定する（デフォルト引数を設定したら、次の引数もデフォルトを設定しなければならない）
double divide(double a, double b = 5){
    return a / b;
}

// 関数テンプレート
// 戻り値や引数の型は関数の呼び出し時に決まる
template <typename T>
T Min(T a, T b){
    if (a < b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    // 関数の定義
    int ans = Plus(1,2);
    cout << ans << endl;

    // inline関数の定義
    int ans2 = max(3,4);
    cout << ans2 << endl;

    // 関数宣言
    int ans3 = Multiple(3,4);
    cout << ans3 << endl;

    // デフォルト引数
    double ans4 = divide(6);
    cout << ans4 << endl;

    // 関数テンプレート
    int ans5 = Min(7,8);
    double ans6 = Min(10.3, 13.7);
    cout << ans5 << endl;
    cout << ans6 << endl;

    return 0;
};

// mainの上で宣言された関数の定義
int Multiple(int a, int b){
    return a * b;
};