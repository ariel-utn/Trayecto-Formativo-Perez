#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo.

Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.

Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.

Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listar� M�ximo
-5.

*/

int main()
{

    int num, contNum = 0, maximo, posicion;

    cout << "Ingrese #: ";
    cin >> num;

    while (num != 0)
    {
        contNum++;
        if(contNum==1){
            maximo = num;
            posicion = contNum;
        }
        /*
        else if(num > maximo){
            maximo = num;
        }
        */
        else{
            if(num > maximo){
                maximo = num;
                posicion = contNum;
            }
        }

        cout << "Ingrese #: ";
        cin >> num;
    }

    cout << "El maximo es: " << maximo << " en la posicion: " << posicion << endl;


    return 0;

}
