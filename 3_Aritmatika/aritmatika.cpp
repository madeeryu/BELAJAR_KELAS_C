#include <iostream>

using namespace std;
int main ()
{
    int a = 6;
    int b = 4;
    int hasil;
//Oprator +, -, *, /, %
// untuk / salah satu harus ada yanng float
/*
contoh 
float a = 4
int = 5 ( tidak bisa di pake di modulus(%))
*/
    // Penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;
    //Pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

// Urutan eksekusi(sesuai prinsip mate)

    hasil = a + b * a;
    cout << hasil << endl;
    return 0;
}