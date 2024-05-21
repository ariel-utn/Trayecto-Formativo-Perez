#include <iostream>
using namespace std;

int main(){

    int num = 0, maxNumero = 0;
    int contPos = 0;

    while(contPos < 2){
        if(num > maxNumero){
            maxNumero = num;
        }
        cout << "Ingrese #: ";
        cin >> num;

        if(num > 0){
            contPos++;
        }
        else{
            contPos = 0;
        }
    }

    cout << "El maximo es: " << maxNumero << endl;


return 0;

}
