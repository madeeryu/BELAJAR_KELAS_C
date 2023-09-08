#include <iostream>

// namsespace berfungsi untuk membuat codingan lebih rapih

namespace contoh{

    int b = 10;
    void fungsi(){
         std::cout << "ini adalah bagian dari namespace contoh" << std::endl;
    }
}



int main (){

    std:: cout << contoh::b << std::endl;
    contoh::fungsi;


    return 0;
}