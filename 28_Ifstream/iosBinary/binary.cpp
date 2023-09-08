#include <iostream>
#include<fstream>
#include <string>

using namespace std;

int main(){
    fstream myFile;
    int hasil;
    myFile.open("data.bin", ios::in | ios::binary);
    //mengambil data pada data yang sudah kita buat yaitu data.bin
    myFile.read(reinterpret_cast<char*>(&hasil),sizeof(hasil));

    cout << "besar data interger yang di ambil adalah " << sizeof(hasil) << endl;
    cout << hasil << endl;


    return 0;
}



// data awal yang di masukan
// fstream myFile;
// int number = 8;
// myFile.open("data.bin", ios::out | ios ::binary);
// myFile.write(reinterpret_cast<char*>(&number),sizeof(number));
// myFile.close();











