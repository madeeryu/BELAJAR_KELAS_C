#include <iostream>

using namespace  std;

// basic function
int luas_segiempat(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}
// overload atau menimpa suatu fungsi dengan fungsi lainnya.
int luas_segiempat (int sisi){
    int luas = sisi * sisi;
return luas;
}
double luas_segiempat (double sisi){
    return sisi * sisi;
} // untuk menimpa fungsi di atas karena varibel int tidak bisa menggunakan niali desimal
int main (){
    cout << "Luas dari segi empat P = 2 dan L = 3 adalah " << luas_segiempat(2,3) << endl;
    cout << "luas segi empat dengan sisi 4 adalah " << luas_segiempat(4) << endl; // overload dari fungsi awal
    cout << "Luas dari segi emapat dengan sisi 2.5 adalah " << luas_segiempat(2.5) << endl; // overload dari luas_segiemapat kedua
    return 0;
}