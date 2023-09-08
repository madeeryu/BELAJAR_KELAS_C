#include <iostream>
#include <string>

using namespace std;

int main(){

    string kalimat_input;

    //getline(cin, variable)
    cout << "masukan kalimat : ";
    getline(cin,kalimat_input);

    cout << "kalimat yang anda input : " << kalimat_input << endl;

    //jumlah kata dari input yang dimasukan

    int jumlah;
    int posisi;

while(true){
    posisi = kalimat_input.find(" ", posisi + 1);
    jumlah++;
    cout << posisi << endl;
    cout << jumlah << endl;

    if (posisi < 0){
        break;
    }
}

cout << "jumlah kata yang anda masukan : " << jumlah << endl;

return 0;
}