#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar una lista de números que finaliza cuando
se ingresa un cero, informar el máximo de los negativos y el mínimo de
los positivos.

Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0.

Máximo Negativo: -3.
Mínimo Positivo: 2.
*/

int main()
{

    int num, minPos, posisionPositivo, maxNeg, posicionNegativo, contador = 0;
    int conPos = 0, conNeg = 0;
    cout << "Ingrese #: ",
         cin >> num;

    while (num != 0)
    {
        contador++;

        if(num > 0){
            /// POSITIVOS
            conPos++;
            if(conPos==1){
                minPos = num;
                posisionPositivo = contador;
            }
            else if(num < minPos){
                minPos = num;
                posisionPositivo = contador;
            }

        }
        else{
            /// NEGATIVOS
            conNeg++;
            if(conNeg==1){
                maxNeg = num;
                posicionNegativo = contador;
            }
            else if(num > maxNeg){
                maxNeg = num;
                posicionNegativo = contador;
            }
        }

        cout << "Ingrese #: ",
        cin >> num;
    }

    cout << "Maximo negativo es: " << maxNeg << " en posicion: " << posicionNegativo << endl;
    cout << "Minimo positivo es: " << minPos << " en posicion: " << posisionPositivo << endl;


    return 0;

}
