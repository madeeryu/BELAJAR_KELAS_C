#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float a,b,hasil;
    char aritmatika;

    cout << "Selamat datang di kalkulator perhitungan dasar \n \n";
    cout << "masukan nilai menggunakan oprator +, -, *, / :  ";
    cin >> a;
    cin >> aritmatika;
    cin >> b;
    cout << "\nhasil perhitungan ";
    cout << a << aritmatika << b;

if (aritmatika == '+'){
    hasil = a + b;
} else if (aritmatika == '-'){
    hasil = a - b;
} else if (aritmatika == '*'){
    hasil = a * b;
} else if (aritmatika == '/'){
    hasil = a / b;
} else {
    cout << " oprator yang anda masukan salah";
}

    cout << " = " << hasil << endl;
    cout << endl; 
return 0;
}
