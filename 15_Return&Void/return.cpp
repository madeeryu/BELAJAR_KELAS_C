#include <iostream>
using namespace std;

int kuadrat(int x){
    int y;
    y = x*x;
return y;
}

int tambah (int a, int b){
    int c;
    c = a + b;
return c;
}


int main (){
    // fungsi return 1
    int input,hasil;
    cout << "masukan nilai yang akan dikuadratkan : ";
    cin >> input;
    hasil = kuadrat(input);
    cout << hasil << endl;

    // fungsi return 2
    int a,b,hasil2;
    cout << "masukan nilai pertama yang akan di tambah :";
    cin >> a;
    cout << "\nmasukan nilai kedua yang akan di tambah : ";
    cin >> b;
    hasil2 = tambah(a,b);
    cout << hasil2 << endl;
}


