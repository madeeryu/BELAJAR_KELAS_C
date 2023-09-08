#include <iostream>

using namespace std;

int main(){

    // typdef adalah memberikan alias untuk tipedata

    typedef int nilai;
    typedef int vector2D[3];
    typedef unsigned long nim;
     
     // nilai di ambil dari typedef nilai 
    nilai a = 10;
    nilai b = 20;
    // typedef di ambil dari typedef vertor2D[3];
    vector2D art = {10, 20, 30};
    //typedef diambil dari typedef unsigned long value;
    nim mahasiswa = 12507334012;

    cout << "nilai a: "<< a  << endl;
    cout << "nilai b: "<< b  << endl;
    cout << "nilai art: " << art [0]<< " dan " <<  art [1]<< " dan " << art [2] << endl;
    cout << "nilai NIM: " << mahasiswa << endl; 
    return 0;
}