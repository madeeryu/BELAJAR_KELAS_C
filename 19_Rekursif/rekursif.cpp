#include <iostream>
using namespace std;

// fungsi  rekursif terbatas
// fungsi yang di mana nilai a akan diulang sampai batas < b
int pangkat(int a, int b){
    int hasil = a;
    for (int i = 1; i<b; i++){
        hasil = hasil*a;
    }
return hasil;
}

int pangkatRekursif (int a, int b){

if (b <= 1){
    return a;
} else {

    return a * pangkatRekursif(a,(b-1));   
}
    
}
int main () {
int a;
int b;
    cout << "masukan angka yang ingin di pangkatkan : ";
    cin >> a;
    cout << "pangkat : ";
    cin >> b;

cout << "hasil pangkat dari " << a << " pangkat " << b << " adalah " << pangkat(a,b) << endl;
cout << "hasil Rekursif "<< pangkatRekursif(a,b) << endl;
}
