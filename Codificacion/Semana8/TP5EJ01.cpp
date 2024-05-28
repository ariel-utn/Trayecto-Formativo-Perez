#include <iostream>
using namespace std;

/**
    Hacer un programa para ingresar una lista de 10 números y luego informar
    cuántos de los números ingresados son perfectos. Se informa 1 resultado al
    final.
*/

int main()
{

    int num;
    int sumaDivisores;
    int cantidadPerfecto = 0;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Ingrese numero: ";
        cin >> num;

        /// EVALUAR SI ES PERFECTO: Un numero es perfecto cuando la suma de sus divisores propios es igual a la suma de los valores ingresados.

        /// PONER UNA VARIABLE EN 0
        sumaDivisores = 0;

        if(num > 0)
        {
            /// RECORRO TODOS LOS DIVISORES DESDE 1 HASTA NUM-1. SI ES DIVISOR LO ACUMULO
            for(int j = 1; j < num; j++)
            {
                if(num%j==0)
                {
                    sumaDivisores+=j;
                }
            }
            /// SI LO ACUMULADO ES IGUAL AL NUMERO, ENTONCES ES PERFECTO
            if(sumaDivisores==num)
            {
                /// CUENTO EL NUMERO
                cantidadPerfecto++;
            }
        }

    }

    /// MUESTRO CUANTOS NUMEROS SON PERFECTOS
    cout << "Total de numeros perfectos: " << cantidadPerfecto << endl;

    return 0;

}
