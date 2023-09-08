#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <limits>
using namespace std;
struct Mahasiswa{
    int pk;
    string nama;
    string UAS;
    string UTS;
    string praktik;
};

void checkDatabase(fstream &database);
int getOption();

void writeData(fstream &database, int posisi, Mahasiswa &inputMahasiswa){
    database.seekp((posisi - 1)*sizeof(Mahasiswa),ios :: beg); // menentukan posisi data yang akan dimasukan
    database.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
}
// fungsi untuk menambah baris baru pada penyimpanan data base
int getDatasize(fstream &database){
    int start,end;
    database.seekg(0,ios::beg);//data akan dimulai dari 0
    start = database.tellg(); // memberitahu posisi
    database.seekg(0,ios::end); // data akan berakhir
    end = database.tellg();
    return (end-start)/sizeof(Mahasiswa);
}

Mahasiswa readData(fstream &database, int posisi){
    Mahasiswa readMahasiswa;
    database.seekg((posisi -1)*sizeof(Mahasiswa),ios::beg);
    database.write(reinterpret_cast<char*>(&readMahasiswa),sizeof(Mahasiswa));
    return readMahasiswa;
}

void addDataMahasiswa(fstream &database){

    Mahasiswa inputMahasiswa,lastMahasiswa;
    int size = getDatasize(database);
    cout << "Jumlah data yang tersimpan : " << size << endl;

    if(size == 0){
        inputMahasiswa.pk = 1;
    }else{
        lastMahasiswa = readData(database,size);
        inputMahasiswa.pk = lastMahasiswa.pk + 1;
    }
    //readData(database,size);
    cout << " Nama : ";
    getline(cin, inputMahasiswa.nama);
    cout << " Nilai UAS : ";
    getline(cin, inputMahasiswa.UAS);
    cout << " Nilai Praktik : ";
    getline(cin, inputMahasiswa.praktik);
    cout << " NIlai UTS : ";
    getline(cin, inputMahasiswa.UTS);
    
    writeData(database,size+1,inputMahasiswa);
}

void displayDataMahasiswa(fstream &database){

    int size = getDatasize(database);
    Mahasiswa showMahasiswa;
    cout << "no.\tpk.\t\tNama.\tNilai UAS.\tNilai Praktik.\tNilai UTS" << endl;

    for(int i = 1; i <= size; i++){
        showMahasiswa = readData(database,i);
        cout << i << "\t";
        cout << showMahasiswa.pk  << "\t";
        cout << showMahasiswa.nama << "\t";
        cout << showMahasiswa.UAS << "\t";
        cout << showMahasiswa.pk << "\t";
        cout << showMahasiswa.UTS << "\t" << endl;

    }


}


int main(){

    fstream database;

    checkDatabase(database);
    
    int pilihan = getOption();
    enum selection {USER = 1,SHOW,UBAH,HAPUS,CLOSE};
    char is_continue;


    while (pilihan != CLOSE){

        switch (pilihan){
        
            case USER:
                cout << "Masukan data Nilai Mahasiswa : " << endl;
                addDataMahasiswa(database);
                break;
            case SHOW:
                cout << "Tampilan data nilai Mahasiswa : " << endl;
                displayDataMahasiswa(database);
                break;
            case UBAH:
                cout << "Masukan Nilai Praktik : " << endl;
                break;
            case HAPUS:
                cout << "Masukan Nilai UTS : " << endl;
                break;
            default:
                cout << "Pilihan tidak ditemukan" << endl;
            break;

        }

        label_continue: // mengulanng program jika pilihan yang dimasukan salah
        cout << "lanjutkan program?(y/n)";
        cin >> is_continue;

        if(is_continue == 'y' | is_continue == 'Y'){
            pilihan = getOption();
        } else if(is_continue == 'n' | is_continue == 'N'){
            break;
        } else {
            goto label_continue;
        }


    }
    
cout << "Program buatan ahmad telah berakhir" << endl;

cin.get();
return 0;
}


// MENU UTAMA
int getOption(){
    int input;
    system("cls");
    // Menu Utama
    cout << "Selamat datang di Program buatan AHMAD" << endl;
    cout << "======================================" << endl;
    cout << "Pilih option yang ada di bawah ini!" << endl;
    cout << "======================================" << endl;
    cout << "1. Masukan data nilai Mahasiswa" << endl;
    cout << "2. Tampilkan data nilai Mahasiswa" << endl;
    cout << "3. Ubah data nilai Mahasiswa" << endl;
    cout << "4. Hapus data nilai Mahasiswa" << endl;
    cout << "5. Keluar Program" << endl;
    cout << "pilih [1-5] : ";
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
return input;
}


void checkDatabase(fstream &database){ 
    
    database.open("data.bin", ios::in | ios::out | ios::binary);

    if(database.is_open()){
        cout << "data bese ditemukan" << endl;
    }else{
        cout << "data base tidak ditemukan" << endl;
        database.close();
    database.open("data.bin", ios::trunc| ios::in | ios::out | ios::binary);

    }
}










