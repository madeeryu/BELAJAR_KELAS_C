#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Membuat struktur
struct Mahasiswa{
    int NIM;
    string nama;
    string jurusan;
};

// Fungsi untuk membaca data yang sudah di masukan pada data.bin
Mahasiswa membacaData(int posisi, fstream &myFile){
    Mahasiswa bacaData;
    //sintax yang digunakan untuk membaca data berdasarkan urutan
    // membaca data pada data.bin dimulai dari pposisi 0
    myFile.seekp((posisi - 1)*sizeof(Mahasiswa));
    myFile.read(reinterpret_cast<char*>(&bacaData),sizeof(Mahasiswa));

return bacaData;
}

// fungsi untuk mengedit data yang sudah ditulis
void editDataByPos(int posisi, Mahasiswa editData, fstream myFile){
    myFile.seekg((posisi - 1)*sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&editData),sizeof(Mahasiswa));

}



int main(){

    fstream myFile;

    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

    //Mahasiswa 1 ada suatu fungsi yang didalamnya memiliki variable
    Mahasiswa mahasiswa1,mahasiswa2,mahasiswa3,output1,output2,output3;

    mahasiswa1.NIM = 234;
    mahasiswa1.nama = "Ahmad";
    mahasiswa1.jurusan = "Elektronika";

    mahasiswa2.NIM = 432;
    mahasiswa2.nama = "Tazkiyah";
    mahasiswa2.jurusan = "Boga";
    
    mahasiswa3.NIM = 123;
    mahasiswa3.nama = "Fulan";
    mahasiswa3.jurusan = "sipil";

    // Menulis data
    myFile.write(reinterpret_cast<char*>(&mahasiswa1),sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&mahasiswa2),sizeof(Mahasiswa));
    myFile.write(reinterpret_cast<char*>(&mahasiswa3),sizeof(Mahasiswa));
   

    // Meng Edit data
/*
    mahasiswa2.nama = "Mario fulan"
    editDataByPos(2,mahasiswa2,myFile)
*/

    // membaca data
//mahasiswa 1
output1 = membacaData(1,myFile);

cout << "NIM : " << output1.NIM << endl;
cout << "Nama : " << output1.nama << endl;
cout << "Jurusan : " << output1.jurusan<< endl;
cout << endl;

//mahasiswa 2
output2 = membacaData(2,myFile);

cout << "NIM : " << output2.NIM << endl;
cout << "Nama : " << output2.nama << endl;
cout << "Jurusan : " << output2.jurusan<< endl;
cout << endl;

// mahasiswa 3
output3 = membacaData(3,myFile);

cout << "NIM : " << output3.NIM << endl;
cout << "Nama : " << output3.nama << endl;
cout << "Jurusan : " << output3.jurusan<< endl;
cout << endl;


myFile.close();
    


    return 0;
}
    