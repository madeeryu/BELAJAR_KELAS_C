#include <iostream>
#include <string>

using namespace std;

int main(){
    string kata("cat");

    // Menampilkan string
cout << kata << endl << endl;

    // Mengambil karakter berdasarkan index (perhuruf)
cout << "index ke-0 : " << kata[0] << endl;
cout << "index ke-1 : " << kata[1] << endl;
cout << "index ke-2 : " << kata[2] << endl;

    // merubah karakter pada index(index dimulai dari 0)
kata[1] = 'e';
cout << kata << endl;

    // menyambungkan karakter
//cara 1
string kata2(kata + "ak");
cout << kata2 << endl;
//cara 2
string kata3("buku");
kata2.append(" " + kata3);
cout << kata2 << endl;
//cara 3
string kata4("tulis");
kata2 += " " + kata4;
cout << kata2 << endl;








    return 0;
}