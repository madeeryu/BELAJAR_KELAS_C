#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "masukan nilai ";
    cin >> a;

    switch(a)
{
    //ketika case benar maka program akan menjalankan program yang di bawah  nya.
       case 1:
          cout << "benar itu adalah 1 \n";
          break; //untuk menghentikan eksekusi program di bawahnya
       case 2:
          cout << "benar itu adalah 2 \n";
       case 3:
          cout << "benar itu adalah 3 \n";
       case 4:
          cout << "benar itu adalah 4 \n";
       case 5:
          cout << "benar itu adalah 5 \n";
          // fungsi default untuk selain angka yang tertera.
       default:
          cout << "default" << endl;
}

    cout << "ini akhir dari program " << endl;
    return 0;
}
