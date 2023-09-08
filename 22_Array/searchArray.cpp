#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

const size_t arraySize = 14;

 void printArray(array<int,arraySize> &angka){
    cout << "Array : ";
    for(int &a : angka){
        cout << a << " ";
    }
    cout << endl;
 }

int main (){

array<int, arraySize> angka ={2,4,6,8,0,1,3,5,6,9,10,12,11,13};

int angkaCari;
bool ketemu;

cout << "Mencari angka di dalam Array !\n";
cout << "Masukan angka : ";
cin >> angkaCari;
//sort terlebih dahulu
// search -> binary_search
sort(angka.begin(), angka.end());
ketemu = binary_search(angka.begin(), angka.end(), angkaCari);

if(ketemu){
    cout << "nilai yang anda masukan terdapat pada array" << endl;
}else{
    cout << "nilai yang anda masukan tidak terdapat pada array" << endl;
}


return 0;
}