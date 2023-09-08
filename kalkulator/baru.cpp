#include <iostream>
using namespace std;


int main(){
    int n = 10;
    cout << "awal for loop 1\n";
    for(int i = 1; i <= n; i++){
         cout << i << endl;

            for(int j = n; j <= i; j--){
                 while(j >= 0 ){
                     cout << j << endl;
                     j--;
                }
            }
    }
    return 0;
}