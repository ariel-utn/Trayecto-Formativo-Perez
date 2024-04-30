/**
Dada una lista de 10 n�meros informar cual es el m�ximo de los pares.

Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa m�ximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa m�ximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa m�ximo: -8

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
