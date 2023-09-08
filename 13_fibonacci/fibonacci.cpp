#include <iostream>

using namespace std;

int main(){

//f(n) = f(n) + f(2)
int n;
int f_n;
int f_n1;
int f_n2;
cout << "Program derer fibonacci" << endl;
cout << "masukan nilai ke-N : ";
cin >> n;


f_n1 = 1;
f_n2 = 0;
f_n = f_n1 + f_n2;
cout << f_n2 << " ";
for(int i = 1; i < n; i++){
    f_n = f_n1 + f_n2;
    f_n2 = f_n1;
    f_n1 = f_n;
    cout << f_n << " ";
}
return 0;

} 
