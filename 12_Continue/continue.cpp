#include <iostream>

using namespace std;

int main(){
for ( int i = 0; i <= 10; i++){

    if (i == 5){
        continue; //hannya satu baris yang terloncat
        //break; // semua baris di bawahnya ikut terskip
    }
    cout << i << endl;
}
cout << "akhirnya"  << endl;

}