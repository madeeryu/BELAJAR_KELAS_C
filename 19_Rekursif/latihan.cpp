#include <iostream>
using namespace std;

int faktorial(int a);

int main (){
    int a;
    int hasil;
    cout << "Menguhitung sebuah nilai faktorial" << endl;
    cout << "Masukan nilai : ";
    cin >> a;

    hasil = faktorial(a);
    cout << "\n nilai faktorialnya adalah " << hasil << endl; 
}

int faktorial (int a){
    if (a <= 1){
        cout << a;
        return a;
    }else{
        cout << a << "*";
        return a*faktorial(a-1);
    }
}