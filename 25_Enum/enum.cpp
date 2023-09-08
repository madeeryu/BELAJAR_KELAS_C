#include <iostream>
using namespace std;


enum warna {merah, kuning, putih, hijau};

int main(){


    warna kain;
    kain = merah;


    if(kain == merah){
        cout << "warna kain adalah kuning" << endl;
    }else{
        cout << "warna kain bukan kuning"<< endl;
    }
//untuk mengetahui posisi index warna merah, index dimulai dari 0
cout << kain << endl;




    return 0;
}