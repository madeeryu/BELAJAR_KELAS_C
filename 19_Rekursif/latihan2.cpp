#include <iostream>
using namespace std;

int fibonaci (int n);

int main(){
    int angka,hasil;
    cout << "Menghitung fibonaci ke - N ";
    cin >> angka;
    hasil = fibonaci(angka);
    cout << "angka yang di hasilkan adalah " << hasil << endl; 
}
int fibonaci (int n){
    if ((n == 0)||(n == 1)){
        return n;
    }else {
        return fibonaci( n - 1 ) + fibonaci( n - 2);
    }
}