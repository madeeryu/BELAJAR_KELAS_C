#include <iostream>
#include <string>

using namespace std;

// comma high oprator digunakan untuk menggabungkan sebuah fungsi
int main(){
int a,b,c;

/*
fungsi awal

b = 5;
c = 6;

a = b + c

cout << a << endl;
cout << b << endl;
cout << c << endl;

bisa di singkat menggunakan fungsi komma
*/
a =(b=5, cout <<"nilai b: "<< b << endl,c=6,cout<<"nilai c: "<< c <<endl,(b+c));
cout <<"nilai a: "<< a << endl;
    return 0;
}