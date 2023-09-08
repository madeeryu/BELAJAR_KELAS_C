#include <iostream>

#define ID 1

#if ID == 1
    #define LANG "Indonesia"
#else   
    #define LANG "English"
#endif


using namespace std;

int main(){


cout << "Bahasa yang dipilih: " << LANG << endl;

    return 0;
}