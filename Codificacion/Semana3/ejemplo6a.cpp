/// Nombre y Apellido:
/// Guia N°:
/// Ejercicio N°:
/// Enunciado:

/**
Hacer un programa para ingresar cinco números y listar cuantos de esos
cinco números son positivos, cuantos son negativos y cuantos son iguales
a 0.

RESUELTOP CON CICLOS

*/

#include <iostream>

using namespace std;

int main()
{

    int cpos = 0;
    int cneg = 0;
    int ccero = 0;
    int num;

    for(int i = 1; i <= 5; i++){
        cout << "Ingrese #: ";
        cin >> num;

        if(num > 0)
        {
            cpos++;
        }
        else if( num < 0)
        {
            cneg++;
        }
        else
        {
            ccero++;
        }
    }

    cout << "Total positivos: " << cpos << endl;
    cout << "Total negativos: " << cneg << endl;
    cout << "Total ceros: " << ccero << endl;

    return 0;
}
