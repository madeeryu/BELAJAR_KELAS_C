#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include "crud.h"

using namespace std;
using namespace crud;

int main(){

	fstream data;
	
	checkDatabase(data);

	int pilihan = getOption();
	char is_continue;

	enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

	while(pilihan != FINISH){
		
		switch(pilihan){
			case CREATE:
				cout << "Menambah data mahasiswa" << endl;
				addDataMahasiswa(data);
				break;
			case READ:
				cout << "Tampilkan data mahasiswa" << endl;
				displayDataMahasiswa(data);
				break;
			case UPDATE:
				cout << "Ubah data mahasiswa" << endl;
				displayDataMahasiswa(data);
				updateRecord(data);
				displayDataMahasiswa(data);
				break;
			case DELETE:
				cout << "Hapus data mahasiswa" << endl;
				displayDataMahasiswa(data);
				deleteRecord(data);
				displayDataMahasiswa(data);
				break;
			default:
				cout << "Pilihan tidak ditemukan" << endl;
				break;
		}

		label_continue:

		cout << "Lanjutkan?(y/n) : ";
		cin >> is_continue;
		if ( (is_continue == 'y') | (is_continue == 'Y')){
			pilihan = getOption();
		} else if ((is_continue == 'n') | (is_continue == 'N')){
			break;
		} else {
			goto label_continue;
		}
	}

	cout << "akhir dari program" << endl;

	cin.get();
	return 0;
}

