#include <iostream>
using namespace std;

// void printArray(int array[]){
//     for 
// }

int main(){
    const int n = 5;
    int array[n] = {1,2,3,4,5};
    cout << "&array[0] = " << &array[0] << endl;
    cout << "array = " << array << endl;
    cout << "---> 配列名は最初の要素のアドレスを表している！" << endl << endl;

    for (int i=0; i<n; i++){
        cout << "&array[" << i << "] = " << &array[i] << endl;
        cout << "array+" << i << " = " << array+i << endl;
        cout << "array[" << i << "] = " << array[i] << endl;
        cout << "*(array+" << i << ") = " << *(array+i) << endl;
    }
    cout << "---> 配列のある要素のアドレスに+1すると、次の要素のアドレスを表す！" << endl << endl;

    int* pt = &array[0];
    cout << "pt = &array[0]の時, pt = " << pt << endl;
    cout << "配列名は配列の先頭要素のアドレスなので当然, array = " << array << endl;
    for (int i=0; i<n; i++){
        cout << "pt[" << i << "] = " << pt[i] << ",  array[" << i << "] = " << array[i] << endl;
        // cout << "*(array+" << i << ") = " << *(array+i) << endl;
    }
    cout << "---> 配列名arrayはあるアドレスを表す。array[0]はそのアドレスの値を表し、array[1]はそのアドレスの隣のアドレスの値を表す。" << endl << endl;

    cout << "配列の要素数：" << array+n - array << endl;
    
    return 0;
}