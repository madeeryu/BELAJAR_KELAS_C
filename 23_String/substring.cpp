#include <iostream>
#include <string>

using namespace std;

int main(){


    string kalimat_1("aku bukanlah supermen");
    string kalimat_2("aku juga bisa nangis jika");
// subtr(index,panjang)
    cout << kalimat_1.substr(4,5) << endl;
    cout << kalimat_2.substr(9,4) << endl;

// mencari posisi dari subtring
    cout << "posisi kata olahraga : ";
    cout << kalimat_1.find("supermen") << endl;
    cout << "posisi kata nangis : ";
    cout << kalimat_2.find("nangis") << endl;
    return 0;
}