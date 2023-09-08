#include <iostream>
#include <string>
#include <limits>
#include <fstream>
using namespace std;

struct Mahasiswa{
    string nama;
    string UTS;
    string Praktik;
    string UAS;
};
Mahasiswa readDataMahasiswa(fstream &database,int posisi){
    Mahasiswa readData;
    database.seekg((posisi - 1)*sizeof(Mahasiswa),ios::beg);
    database.read(reinterpret_cast<char*>(&readData),sizeof(Mahasiswa));
    return readData;
}
void mainData(fstream &database);
int getDataSize(fstream &database);
void fungsiInputMahasiswa(fstream &database, int posisi, Mahasiswa &inputMahasiswa);
void displayDataMahasiswa(fstream &database);
void inputDataMahasiswa(fstream &database);
int mainMenu();


int main(){

    fstream database;
    mainData(database); // membuat file baru untuk data base

    char is_continue;
    int option = mainMenu();
    enum condition {INPUT = 1,LOOK,NILAI,CLOSE};
    while (option != CLOSE){

        switch (option){

        case INPUT:
            cout << "Masukan data dengan benar !" << endl;
            inputDataMahasiswa(database);
        break; 

        case LOOK:
            cout << "Masukan data dengan benar !" << endl;
            displayDataMahasiswa(database);
        break;
        
        case NILAI:
            cout << "Masukan data dengan benar !" << endl;
            break;
        default:
            break;
        }

        label_continue:
        cout << "Lanjutkan Program?(y/n)";
        cin >> is_continue;
        cout << endl;
        if(is_continue == 'y' | is_continue =='Y'){
            option = mainMenu();
        }else if(is_continue == 'n' | is_continue == 'N'){
            break;
        }
        else{
            goto label_continue;
        }


        cout << "program Selesai" << endl;
    }
    



return 0;
}

//Menu utama
int mainMenu(){
    int getInput;
    system("cls");
    cout << "Selamat datang di Program CRUD data nilai Akhir Mahasiswa" << endl;
    cout << "=========================================================" << endl;
    cout << "Silahkan Pilih menu dibawah ini :" << endl;
    cout << "==================================" << endl;
    cout << "1. Masukan Data Mahasiswa" << endl; 
    cout << "2. Lihat Data Mahasiswa" << endl; 
    cout << "3. Lihat Rata-Rata Nilai Mahasiswa" << endl; 
    cout << "4. Close program" << endl;
    cout << "pilih [1-4] : ";
    cin >> getInput;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    return getInput;
}

int getDataSize(fstream &database){
	int start, end;
	database.seekg(0,ios::beg);
	start = database.tellg();
	database.seekg(0,ios::end);
	end = database.tellg();
	return (end-start)/sizeof(Mahasiswa);
}
void fungsiInputMahasiswa(fstream &database, int posisi, Mahasiswa &inputMahasiswa){
    database.seekp((posisi -1)*sizeof(Mahasiswa),ios::beg);
    database.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
}
// membuat file untuk database
void mainData(fstream &database){
    database.open("database.bin", ios::in | ios::out | ios::binary);

    if(database.is_open()){
        cout << "database ditemukan" << endl;
    }else{
        database.close();
        database.open("database.bin", ios::trunc | ios::in | ios::out | ios::binary);
    }
}


// memasukan INput nilai mahasiswa
void inputDataMahasiswa(fstream &database){
    Mahasiswa inputMahasiswa,lastMahasiswa;
    int size = getDataSize(database);
    cout << "banyaknya data yang tersimpan : " << size << endl;

    cout << "Nama: ";
    getline(cin,inputMahasiswa.nama);
    cout << "Nilai UTS: ";
    getline(cin,inputMahasiswa.UTS);
    cout << "Nilai Praktik: ";
    getline(cin,inputMahasiswa.Praktik);
    cout << "Nilai UAS: ";
    getline(cin,inputMahasiswa.UAS);

    fungsiInputMahasiswa(database,size+1,inputMahasiswa);
}


void displayDataMahasiswa(fstream &database){
	int size = getDataSize(database);
	Mahasiswa showMahasiswa;
	cout << "no.\tpk.\tNama.\tUTS.\tPraktik.\tUAS" << endl;
	for(int i = 1; i <= size; i++){
		showMahasiswa = readDataMahasiswa(database,i);
		cout << i << "\t";
		cout << showMahasiswa.nama << "\t";
		cout << showMahasiswa.UTS << "\t";
		cout << showMahasiswa.Praktik << "\t";
		cout << showMahasiswa.UAS << endl;
	}
}