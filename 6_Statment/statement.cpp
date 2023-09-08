#include <iostream>
using namespace std;

int main(){

    int a;

    cout << "masukan angka = ";
    cin >> a;
// if statement
//kondisi harus dalam bentuk boolean
    if ( a == 10){

        cout << a << " dalah angka yang lebih besar dari 3"<< endl;
    }
    // else if
    else if ( a < 10){
        cout << a << " adalah angka yang lebih kecil dari 10" << endl;
    }
     // else
    else {
        cout << a << " adalah angka yang lebih dari 10" << endl;
    }

    cout << "selesai" << endl;


    cin.get();
    return 0;
}
