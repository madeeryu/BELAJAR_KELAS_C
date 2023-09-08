#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Konversi Biner ke Desimal  ##" << endl;
  cout << "=============================================" << endl;
  cout << endl;
 
    int angka_biner, angka_desimal=0, i=1, digit;
    cout << "Input angka biner: ";
    cin >> angka_biner;
 
    cout << "Angka desimal dari biner "<< angka_biner;
 
    while(angka_biner!=0)
    {
      digit = angka_biner % 10;
      angka_desimal = angka_desimal + (digit*i);
      i = i*2;
      angka_biner = angka_biner/10;
    }
 
    cout << " adalah = " << angka_desimal;
    cout << endl;
    return 0;
}