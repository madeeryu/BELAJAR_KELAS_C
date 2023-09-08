#include <iostream>
#include <bitset>
using namespace std;

/*
Bitwise oprator

- &  = bitwise AND
- |  = bitwise inclusive OR
- ^  = Bitwise exclusive OR(XOR)
- ~  = NOT
- << = SHL shitt bits left
- >> = SHL Shift bits right
 
*/
void printBinary(unsigned short val, string nama)//unsigned adalah hanya untuk menghitung sebuah bilangan bulat
{
    //bitset untuk mengeluarkan angka binary yang fungsinya sudah ada di dalam pembelajaran
    // rumus bitset
    cout << nama << " = " << bitset<8>(val) << endl;
}
int main(){

unsigned short a = 6;
unsigned short b = 10;
unsigned short c;


cout << "\n | = Bitwise OR" << endl;
// OR = jika ada salah satu atau kedua nilai 1 maka hasilnya 1
//nilai c adalah output atau hasil dari a dan b, sedangkan a,b adalah input
c = a | b;
// posisi  nilai a,b,c yang tidak ada didalam tanda petik adalah sama spt short val pada fungsi di awal!
printBinary(a, "a");
printBinary(b, "b");
printBinary(c, "c");
cout << "c = " << c << endl;

cout << "\n & = Bitwise AND" << endl;
// AND = jika ada salah satu atau kedua nilai 0 maka hasilnya 0
//nilai c adalah output atau hasil dari a dan b, sedangkan a,b adalah input
c = a & b;
// posisi  nilai a,b,c yang tidak ada didalam tanda petik adalah sama spt short val pada fungsi di awal!
printBinary(a, "a");
printBinary(b, "b");
printBinary(c, "c");
cout << "c = " << c << endl;
 
cout << "\n ^ = Bitwise XOR" << endl;
// XOR = jika ada salah satunya bernilai 1 maka hasil 1,jika inputnya sama berarti nilai nya 0
//nilai c adalah output atau hasil dari a dan b, sedangkan a,b adalah input
c = a ^ b;
// posisi  nilai a,b,c yang tidak ada didalam tanda petik adalah sama spt short val pada fungsi di awal!
printBinary(a, "a");
printBinary(b, "b");
printBinary(c, "c");
cout << "c = " << c << endl;

cout << "\n ~ = Bitwise NOT" << endl;
// NOT = jika intputnya nilai 1 maka outputnya 0, begitu juga sebaliknya
//nilai c adalah output atau hasil dari a dan b, sedangkan a,b adalah input
c = ~a ;
// posisi  nilai a,b,c yang tidak ada didalam tanda petik adalah sama spt short val pada fungsi di awal!
printBinary(a, "a");
printBinary(c, "c");
cout << "c = " << c << endl;



    return 0;
}    