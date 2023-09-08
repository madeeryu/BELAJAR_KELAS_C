#include <iostream>
#include <array>

using namespace std;

int main(){

    // array dengan menggunakan standar libary
    // array < int , jumlah array > nama array
    array < int, 5 > nilai;

    for(int i = 0; i<= 4; i++){
        nilai[i] = i;
        cout << "nilai [" << i << "} = " << nilai[i];
        cout << "addres :" << &nilai[i] << endl;
    }
    // ukuran array
cout << endl;
cout << "ukuran size array : " << nilai.size() << endl;
    // addres awal dari array
cout << "addres awal : " << nilai.begin() << endl;
    // adrres akhir dari array
cout << "addres akhir : " << nilai.end() << endl;
    // Mengambil nilai dengan index
cout << "nilai ke 2 = " << nilai.at(2) << endl;


}