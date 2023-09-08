#include<iostream>
// 1 byte = 8 bit
// integer = 32 bit
//nilai maksimum integer = 248483647
// Bilangan bulat
int t = 4;
long m = 5;
short g = 2;
// Bilangan desimal
float s = 1.0;
double l = 2.7;
// Character 
char v = 'a';

// Bolean
bool c = true;

using namespace std;

int main ()
{   
    int a = 1; //coment untuk byte yg lebih banyak adalah long

    cout << sizeof(a) << " byte" << endl;
    
    return 0;
}