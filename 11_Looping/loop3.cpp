#include <iostream>

using namespace std;

int main () {
// for (inisialisasi, loop kondisi, increment){statement}
    cout << "awal for loop 1\n";
    for(int i = 1; i <= 10; i++){
        cout<< i << endl;

    }
    cout<< "awal dari loop 2\n";
    for(int i = 1; i <= 10; i += 2){
        cout<< i << endl;

    }
    cout<< "awal dari loop 3\n";
    for(int i = 1; i >= -10; i--){
        cout<< i << endl;

    }
    cout<< "awal dari loop 4\n";
    int total = 0;
    for(int i = 1; i >= -10; total += i, i--){
        cout<< i << " || " << total << endl;

    }
    return 0;
}