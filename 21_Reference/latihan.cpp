#include <iostream>

using namespace std;
void kuadrat (int &);
void fungsi (int &);
int main() {
    int a = 5;
    cout << "addres a " << &a << endl;
    cout << "nilai a " << a << endl;
    kuadrat(a);
    cout << "nilai a " << a << endl;

    return 0;
}

void fungsi(int &b){
    b = 10;
    cout << "addres b" << &b << endl;
    cout << "nilai b " << b << endl;
}

void kuadrat(int &nilaiReferensi){
    nilaiReferensi = nilaiReferensi * nilaiReferensi;
}