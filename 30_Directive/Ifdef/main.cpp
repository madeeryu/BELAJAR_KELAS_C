#include <iostream> 


//Ifdef
#define SETAN  

#ifdef SETAN //jika setan ini ada maka print
#define _SETAN "awass ada setan"
#else 
#define _SETAN "Tenang aja ga ada setan"
#endif




//ifndef
// #ifndef SETAN -> jika tidak ada define setan maka akan di buat
//#define SETAN

// pragma once
// #pragma once -> setiap file sudah terinclude maka tidak  udah menginclude lagi





using namespace std;

int main(){

    cout << _SETAN << endl;



    return 0;
}