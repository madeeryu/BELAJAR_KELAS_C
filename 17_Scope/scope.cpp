#include <iostream>

using namespace std;


int x = 10;// Global scope
int ambil_global (){
    return x;
} // Variable global yang bisa di runing di baris mana pun
int x_local(){
    int x = 5;
    return x;
} // Vaariable local yang tidak mengganggu baris di bawahnya
int main (){
    cout << "1.Variable global scope : "<< x << endl;
int x = 8; // Variabel Local main
    cout << "2.Variable Local main : " << x << endl;
    cout << "3.Varible ambil_global : " << ambil_global() << endl;
    cout << "4.Variable Local main : " << x_local() << endl;

{
    //Bloke scope
    int x = 2;
    cout << "5.Variable Local main : " << x << endl;
// variable yang tidak mempengaruhi apapun yang ada di dalam body atau  main
}
    cout << "6.Variable Local main : " << x << endl;

    return 0;
}