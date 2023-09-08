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
 void printArray(array<char,arraySize> &angka){
    cout << "Array : ";
    for(char &a : angka){
        cout << a << " ";
    }
    cout << endl;
 }
 int main(){
    array <int, arraySize> angka ={2,4,6,8,0,1,3,5,6,9,10,12,11,13};
    array <char, arraySize> huruf ={'a','c','e','g','i','k','m','b','d','f','h','j','l','n'};

    printArray(huruf);
    printArray(angka);

    cout << endl;

    sort(angka.begin(), angka.end());
    printArray(angka);

    sort(huruf.begin(), huruf.end());
    printArray(huruf);


return 0;
 }