#include <iostream>

using namespace std;

// do while = aksi terlebih dahulu baru masuk ke syarat
// do while jika syaratnya salah maka program akan di laksanakan 1 kali

int main () {

    int a = 1;
    do {
        cout << "hore ";
        cout << a << endl;
        a++;
    }while (a <= 30);

    cout << "looping selesai" << endl;
    
    
    return 0;
}