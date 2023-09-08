#include <iostream>
#include <fstream> // ofstream,ifstream,fstream
using namespace std;


int main(){

    ofstream myFile;
// ios::out = default, oprasi output;
// ios::trunc = default, mumbuat file baru jika tidak ada dan menghpaus file lama jika ada 
// ios::app = menambahkan baris baru ketika menyimpan filenya


    // ios::out
    myFile.open("data1.txt", ios::out);
    myFile << "Menuliskan di data 1 "; // untuk memasukan suatu file secara eksternal
    myFile.close();

    //ios::trunc
    myFile.open("data2.txt", ios::trunc);
    myFile << "Menuliskan di data 2 "; // untuk memasukan suatu file secara eksternal
    myFile.close();

    //ios::app
    myFile.open("data3.txt", ios::app);
    myFile << "\nMenuliskan di data 3 "; // untuk memasukan suatu file secara eksternal
    myFile.close();

    return 0;
}
