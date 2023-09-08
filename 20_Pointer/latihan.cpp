#include <iostream>
using namespace std;

int fungsi (int *);
int kuadrat (int *);

int main() {
    int a = 10;
    cout << "addres a adalah " << &a << end;
    cout << " nilai a : " << a << endl;
    kuadrat(&a);
    cout << "nilai a" << a << endl;

    return 0;
}

void fungsi(int *b){
     cout << "addres nilai b adalah " << b << end;
     cout << "nilai b : " << *b << endl; // dereferencing
}

void kuadrat(int *valPtr){
    *valPtr = (*valPtr) * (*valPtr);
}