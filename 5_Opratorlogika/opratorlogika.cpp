#include <iostream>

using namespace std;

int main()
{
// oprator logika : not , and , or ( or dan and adalah berkebalikan)
    int a = 2;
    int b = 4;

    bool hasil;

    // not (!)
    cout << "ini untuk not \n";
    hasil = !(a == 2);
    cout << hasil << endl;

    // and (&&)( true = semua harus benar)
    cout << "ini untuk and \n";
    hasil = (a == b) and (b == 4);// true and true = true(1)
    cout << hasil << endl;
    hasil = (a == 2) and (b == 5);// true and false = false(0)
    cout << hasil << endl;
    hasil = (a == 4) && (b == 4);// false and true = false(0)
    cout << hasil << endl;
    hasil = (a == 3) && (b == 1);// false and false = false (0)
    cout << hasil << endl;

    // or (||) tombol atas enter ( false = semua harus salah)
    cout << "ini untuk or \n";
    hasil = (a == 2) || (b == 4);// true and true = true(1)
    cout << hasil << endl;
    hasil = (a == 2) || (b == 5);// true and false = true(1)
    cout << hasil << endl;
    hasil = (a == 4) || (b == 4);// false and true = true(1)
    cout << hasil << endl;
    hasil = (a == 3) || (b == 1);// false and false = false (0)
    cout << hasil << endl;

return 0;
}