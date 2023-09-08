#include <iostream>
using namespace std;

// Fungsing return adanya pengulangan
int kuadrat (int x){
    int y;
    y = x*x;
return y;
}
// fungsi void untuk menampilkan fungsi yang berada di luar int main
int tampilkan (int input){
    cout << "menampilkan dengan fungsi void : ";
    cout << input << endl;
}

int main (){

    int input,hasil;
    cout << "masukan nilai yang akan di kuadratkan : ";
    cin >> input;
    hasil = kuadrat(input);
    tampilkan(hasil);

    return 0;
}
