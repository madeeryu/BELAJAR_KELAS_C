#include <iostream>
#include <array>

using namespace std;

int main(){
    array <int,10> nilai;
    cout << "program menampilkan grafik nilai" << endl << endl;
    // input data
    for(int mahasiswa; mahasiswa <= nilai.size(); mahasiswa++){
        cout << "jumlah siswa dengan nilai ";
        if(mahasiswa == 0){
            cout << "0 - 9 : ";
        } else if (mahasiswa == 10) {
            cout << "100 : ";
        } else {
            cout << mahasiswa*10 << " - " << mahasiswa*10 + 9 << " : ";
        }
        cin >> nilai[mahasiswa];
    }
    cout << endl;
    // mennggambar grafik
    cout << "Grafik nilai" << endl << endl;
    for (int mahasiswa = 0; mahasiswa<= nilai.size(); mahasiswa++){

        if(mahasiswa == 0){
            cout << "0 - 9   : ";
        } else if (mahasiswa == 10) {
            cout << "100    : ";
        } else {
            cout << mahasiswa*10 << " - " << mahasiswa*10 + 9 << " : ";
        }
        
        for(int bintang = 0; bintang < nilai[mahasiswa]; bintang++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
