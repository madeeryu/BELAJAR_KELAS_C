#include <iostream>

using namespace std;

// syarat loop nilai harus boolean
int main () {

    int a = 50;
    // program akan berjalan terus
    while(a <= 100){
        cout << "berhasil ";
        cout << a << endl;

        a += 1; // untuk memberhentikan looping, loopimng pertama akan di tambah satu sehingga 6, dan terus berjalan sampai ke 10
    }
    
    cout << "looping selesai" << endl;

    return 0;
}