#include <iostream>
#include <string>
using namespace std;


// agar bisa mengeprint dengan tipe data apapun
template<typename T>
void print(T data){
    cout << data << endl;
}

// mengeprint untuk merubah tipe data
template<typename T>
int toInt(T data){
    return int(data);
}

// fungsi mengeprint apakah nilai a lebih besar dari b / ternary
template<typename T, typename U>
T max(T a, T b){
    return (a > b)? a : b;
}

int main(){

    print(8);
    print(2.8);
    print('c');
    print(toInt(8));
    cout << max(10,220) << endl;

    // merubah tipe data 

    print<double>(8.203);// asal tipe datanya adalah int di rubah jadi double
    print<int>(2.8); // asal tipe datanya adalah double di rubah jadi int
    cout << max<double,int>(244.55,220) << endl; // asal datanya adalah int semua


    return 0;
}