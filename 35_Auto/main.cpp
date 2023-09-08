#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template<typename T, typename U>
auto max(T x, U y) {

return (x > y)? x : y;

}

int main(){

    // fungsi auto adalah tipe data yang menyesuaikan variabelnya
    auto a = 15;
    auto b = "test";
    float c = 14.2f;
    auto e = max(a,c);
    cout << a << "\ttipe: " << typeid(a).name() << endl;// untuk melihat jenis tipe data yang digunakan
    cout << b << "\ttipe: " << typeid(b).name() << endl;
    cout << e << "\ttipe: " << typeid(e).name() << endl;
    cout << a << "\ttipe: " << typeid(a).name() << endl;

    return 0;
}