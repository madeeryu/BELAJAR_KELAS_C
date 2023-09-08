#include <iostream>
#include <string>

using namespace std;

//ternary adalah pengganti if else
// rumus nya adalah
// kondisi ? hasil1(jika false) : hasil2(jika true)


int main(){

int a,b;
string hasil1,hasil2,output;


a = 5;
hasil1 = "nilai yang anda masukan lebih besar dari nilai yang kami punya";
hasil2 = "nilai yang anda masukan lebih kecil dari nilai yang kami punya";

cout << "masukan angka : ";
cin >> b;

output = (a < b) ? hasil1 : hasil2;
cout << output << endl;


}