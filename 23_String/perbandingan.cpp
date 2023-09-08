#include <iostream>
#include <string>

using namespace std;

int main(){

    string input;
    string nama("ahmad");

        cout << "Selamat datang dipermaianan sederhana\n";
    while(true){

        cout << "tebak nama : ";
        cin >> input;

            if(input == nama){
                cout << "nama yang kamu tebak benar!" << endl;
                break;
            }
             if(input == "selesai"){
                break;
            }

        cout << "\nnama yang kamu tebak salah, coba lagi sampai berhasil!" << endl;
        cout << "\njika ingin berhenti dari permainan ketik : selesai" << endl;

    }
    
cout << "permainan selesai";




    return 0;
}
    