#include <iostream>
using namespace std;

// merubah suatu variable

int main(){

    int a =  5;
    float b = 6.67f;
    char c = 'b';

    //merubah varible int menjadi float
    cout << "Varible int -> float (hasil koma)" << endl;
    cout << (float) a + b << endl;

    //Merubah variable float menjadi int
    cout << "Varible float -> int (hasil jejeg)" << endl;
    cout <<  a + (int)b << endl;



    return 0;
}