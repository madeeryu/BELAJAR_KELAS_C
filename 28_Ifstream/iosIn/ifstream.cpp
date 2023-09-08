#include <iostream>
#include <fstream>
#include <string>

using namespace std;
//getline(myFile(file eksternal),file) digunakan untuk mengambil 1 baris 

// ios::in (default)
// ios::ate(mulai dari akhir file)
// ios::binary (bilangan biner)
int main(){
    
    ifstream myFile;
    string output,file;
    bool isiData = false;
    int no;
    string nama;

    myFile.open("data.txt", ios::in);

    while(!isiData){
        getline(myFile,file);// untuk memunculkan baris 1 dan 2
        output.append("\n" + file);
        if(file == "data"){
            isiData = true; // untuk membuat looping berhenti pada kata "data"
        }
    }
cout << output << endl;


    getline(myFile,file); // untuk memunculkan baris setelah 1 dan 2
    cout << file << endl;
    int jumlah_data = 0;
    while(!myFile.eof()){ // eof adalah end of data atau mengambil data hingga akhir
        myFile >> no;
        myFile >> nama;

       cout << no << "\t" << nama << endl; 
        jumlah_data++;
    }
cout << "jumlah data : " << jumlah_data << endl;
    return 0;
}