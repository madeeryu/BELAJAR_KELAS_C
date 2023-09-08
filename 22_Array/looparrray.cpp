#include <iostream>
#include <array>

using namespace std;

int main(){
    /*
        for (deklarasi variable : array){
            statment
        }
    */
array <int,10> nilaiArray = {0,1,2,3,4,5,6,7,8,9};

    for(int nilai : nilaiArray){
        cout << "addres" << &nilai << " nilainya : " << nilai << endl;
    }
    cout << endl;
    //merubah
    for(int &nilaiRef : nilaiArray){
        nilaiRef *= 2;
        cout << "addres" << &nilaiRef << " nilainya : " << nilaiRef << endl;
    }

}