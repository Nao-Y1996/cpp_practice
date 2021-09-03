#include <iostream>
using namespace std;
int main(){


    int* pA;
    // new でメモリ確保(確保するのはアドレスなので、確保したメモリはポインタに入れる)
    pA = new int; //int型の値をおくためのメモリを確保
    cout << "動的にメモリ確保しました。メモリにおく値を入力してください。"<< endl;

    // 確保したメモリに値を入れる
    cin >> *pA;
    cout << "動的に確保したメモリに" << *pA << "を入れました。" << endl;
    delete pA;
    cout << "メモリを解放しました。"<< endl << "--------------" << endl;




    int num;
    int* pT;

    cout << "配列要素数を入力してください" << endl;
    cin >> num;

    // new でメモリ確保(確保するのはアドレスなので、確保したものはポインタに入れる)
    pT = new int[num]; //int型の要素をnum個おける配列のメモリを確保

    cout << "要素を入力してください"<< endl;
    for (int i; i<num; i++){
        // 確保したメモリに値を入れる
        cin >> pT[i];
    }

    cout << "作成された配列は [";
    for (int i; i<num; i++){
         cout << pT[i] << ',';
    }
    cout << "\b]です" << endl;

}