#include <iostream> 
#include "library.h"// Mengambil data dari file lain
using namespace std;

int main(){

    
    bilanganBiner();// suatu fungsi yang di ambil dari file eksternal

    cout << "nilai PHI: " << PI << endl; // nilai di ambil dari file eksternal
    cout << "ini adalah data " << file << endl;//Mengambil nilai string dari file eksternal

    return 0; 
}