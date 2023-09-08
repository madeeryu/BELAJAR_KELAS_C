#include <iostream>
#include <string>
using namespace std;

int main(){
    string kalimat_1("kau menemukan ku disaat ku terjatuh");
    string kalimat_2("kedalam ruang yang penuh kepahaitan");

    cout << "1:" << kalimat_1 << endl;
    cout << "2:" << kalimat_2 << endl;


//swap atau menukar posisi string

kalimat_1.swap(kalimat_2);
    cout << "swap string" << endl;
    cout << "1:" << kalimat_1 << endl;
    cout << "2:" << kalimat_2 << endl;

//Replace atau mengganti string
kalimat_2.replace((kalimat_2.find("jatuh")),5,"jungkal");
    cout << "replace string" << endl;
    cout << "1:" << kalimat_1 << endl;
    cout << "2:" << kalimat_2 << endl;

//insert atau memasukan kata pada string
kalimat_1.insert(19,"ASOOOUU GEBOOOY ");
    cout << "insert string" << endl;
    cout << "1:" << kalimat_1 << endl;
    cout << "2:" << kalimat_2 << endl;

}