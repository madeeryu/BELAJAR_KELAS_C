#include <iostream>
using namespace std;

//prototipe

double hitung_luas (double a, double t);
int main(){

    cout << "Perhitungan luas segitiga sama kaki!";
int alas,tinggi;
    cout << "\nmasukan nilai alas segitiga : ";
    cin >> alas;
    cout << "\nmasukan nilai tinggi segitiga : ";
    cin >> tinggi;
    cout << "Luas segitiga adalah "<< hitung_luas(alas,tinggi);
return 0;
}
double hitung_luas (double a, double t) {
    return a*t/2;
}
