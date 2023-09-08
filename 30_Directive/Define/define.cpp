//preprocesing directive
// define tidak akan memakan memori.
// untuk melihat hasil g++ -E (namafile) -o (nama file yg kita mau.p)
#include <iostream>

// Define jenis macro merubah nilai dengan nama
#define BAHASA "indonesia"// kata PI akan dirubah menjadi 3.145

// Macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B)((A>B) ? A:B)
// jika A lebihdari B maka nilai maxnya A atau sebaliknya

// akhir dari prepocesing dairective
using namespace std;


int main(){

    cout << "bahasa: "<<BAHASA << endl;
    cout << "kuadrat :" << KUADRAT(5)<< endl;
    cout << "max: " << MAX(5,6) << endl;

    #undef BAHASA // fungsi define selesai di sini.
    return 0;
}