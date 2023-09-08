#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 3;

    bool hasil1,hasil2;

//komparasi, realation expression
// jika hasil 1 berarti benar jika hasil 0 berarti salah
   //sebanding
   hasil1 = ( a == b );
   cout << hasil1 << endl;
   //tidak sebanding
   hasil2 = (a != b);
   cout << hasil2 << endl;
   //kurang dari 
   hasil1 = (a < b);
   cout << hasil1 << endl;
   //lebih dari
   hasil2 = (a > b);
   cout << hasil2 << endl;

return 0;
}