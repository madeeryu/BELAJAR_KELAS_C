#include <iostream>
#include <string>
using namespace std;
// nesting adalah penggabungan 2 struct
// 1
struct aktor{
    string nama;
    int tahu_lahir;
};

// 2 
struct film {
    string judul;
    string genre;
    int tahun;
//nesting 
    aktor pemeran_1;
    aktor pemeran_2;
};


int main(){
aktor aktor_1,aktor_2;
film film_1,film_2;
aktor_1.nama = "Mamad bodong";
aktor_2.nama = "michell julian";

//nestingan
film_1.pemeran_1 = aktor_1;

//untuk mememunculkan nestingan dari 2struct di atas adalah
// masukan kembali varible yang sudah di buat pada struct pertama
cout << film_1.pemeran_1.nama << endl;


    return 0; 
}