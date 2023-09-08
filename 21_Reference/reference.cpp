#include <iostream>
using namespace std;
int main (){
    // variabel
    int a = 5;
    cout << "address dari a " << &a << endl;
    cout << " nilai dari a " << a << endl << endl;
    // reference
    int &b = a;
    cout << " nilai dari b " << b << endl;
    cout << "address dari b " << &b << endl << endl;
// jika nilai berubah b maka nilai a ikut berubah
    b = 10;
    cout << " nilai dari b " << b << endl;
    cout << "address dari b " << &b << endl << endl;

    return 0;
}
