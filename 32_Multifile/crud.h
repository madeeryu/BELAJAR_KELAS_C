#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

namespace crud {
    struct Mahasiswa {
        int pk;
        string NIM;
        string nama;
        string jurusan;
    };
}
using namespace crud;

int getOption();
void checkDatabase(fstream &data);
void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa);
int getDataSize(fstream &data);
Mahasiswa readData(fstream &data, int posisi);
void addDataMahasiswa(fstream &data);
void displayDataMahasiswa(fstream &data);
void updateRecord(fstream &data);
void deleteRecord(fstream &data);
