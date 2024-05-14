#include <iostream>
using namespace std;

int main(){

    int num, maxPar, contPos = 0, posMaxPar;
    bool bandPar = false;

    cout << "Ingrese #:";
    cin >> num;

    while( num != 0){
    contPos++;

    if( num%2 == 0 ){
        if(bandPar==false){
            maxPar = num;
            posMaxPar = contPos;
            bandPar = true;
        }
        else{
            if(num > maxPar){
                maxPar = num;
                posMaxPar = contPos;
            }
        }
    }

    cout << "Ingrese #:";
    cin >> num;
    }

    cout << "El maximo par es: " << maxPar << " en la posicion: " << posMaxPar << endl;

return 0;

}
