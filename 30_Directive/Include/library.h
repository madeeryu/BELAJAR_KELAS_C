#define PI 3.144436


// memasukan libary string
#include <iostream>
#include <string>
using namespace std;

string file = "STRING";

int bilanganBiner(){
  cout << "##  Program C++ Konversi Desimal ke Biner ##" << endl;
  cout << "============================================" << endl;
  cout << endl;
 
  int a[10], n, i;
 
  cout << "Input angka desimal: ";
  cin >> n;
 
  for(i=0; n>0; i++){
    a[i] = n%2;
    n = n/2;
  }
 
  cout << "Angka binernya adalah: ";
 
  for(i=i-1 ;i>=0 ;i--) {
    cout << a[i];
  }
  cout << endl;
}