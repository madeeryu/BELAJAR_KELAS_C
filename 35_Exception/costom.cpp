#include <iostream>
#include <exception>

using namespace std;
// exection costom
int pembagian(int a, int b){
    if ( b == 0 ){
        throw overflow_error("Ga bisa di bagi sama nol anj");
    }
    return a/b;
}



int main(){
    system("cls");
    int a,b;
    char is_continue;
    int c;
    label_continue:
    while(true){
        
        cout << "masukan nilai yang ingin dibagi: ";
        cin >> a;
        cout << "masukan nilai pembagi: ";
        cin >> b;

        try{
            c = pembagian(a,b);
            cout << c << endl;
        }
        // jika pembagi enol maka kan dilempar dan dicetak melalui if pada pembagian
        catch(exception &e){
            cout << e.what() << endl;
        }
        cout << "Lanjutkan?(y/n)";
        cin >> is_continue;
            if(is_continue == 'n' || is_continue == 'N'){
                break;
            } else if(is_continue == 'y' || is_continue == 'Y'){
                goto label_continue;
            }
    }
        cout << "Program selesai" << endl;
return 0;
}