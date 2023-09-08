#include <iostream>
#include <array>
#include <exception>

using namespace std;

/*
Macam macam eror dalam c++
1. Syntax eror : eror yang terjadi karena typo dalam mengetikan syntax
2. linking eror : eror yang terjadi saat melinking suatu fungsi 
3. non-eror : eror yang terjadi karena salah memasukan suatu nilai
4. runtime eror : eror yang terjadi karena
*/
int main(){

    array<int,5> a = {0,1,2,3,4};
    // mencoba suatu program eror tidak
    try {

        cout << a.at(5) << endl;

    }catch(exception &e){ // jika eror maka akan di tangkap dan di keluarkan pada catch
        cout << "Error: " << e.what() << endl;
    }


    return 0;
}