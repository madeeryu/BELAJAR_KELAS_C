#include <iostream>
#include <string>

using namespace std;
//struct adalah data yang di bentuk oleh beberapa data
struct mahasiswa {
// tidak harus variable string yang dimasukan pada struct
    string nama;
    string NIM;
    string status;
    string alamat;
    
};
int main(){

mahasiswa uny;

uny.nama = "Ahmad Alfaruqi Haqinullah";
uny.NIM = "22507334012";
uny.status = "lulus";
uny.alamat = "jln Mawar no 15, perumahan kusuma indah 2, desa setu kulon Kec. tengah tani";

cout << "nama  : " << uny.nama << endl;
cout << "NIM   : " << uny.NIM << endl;
cout << "status : " << uny.status << endl;
cout << "alamat : " << uny.alamat << endl;



    return 0;
}