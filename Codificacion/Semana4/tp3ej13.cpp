/**
Dada una lista de 10 números informar cual es el máximo de los pares.

Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa máximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa máximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa máximo: -8

*/

#include <iostream>
using namespace std;

int main(){

    int maxpar;
    int i, num;
    bool bpar = false;

    for (i = 1; i <= 10; i++){
        cout << "Ingrese #: ";
        cin >> num;

        if( (num%2==0) && (bpar==false) )
        {
            maxpar = num;
            bpar = true;
        }
        else if( (num%2==0) && (num>maxpar) ){
            maxpar = num;
        }

    }

    system("cls");

    if( bpar == true){
        cout << "El maximo es: " << maxpar << endl;
    }
    else{
        cout << "Lista sin numeros pares" << endl;
    }

return 0;

}
