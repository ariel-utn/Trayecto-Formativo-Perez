#include <iostream>
using namespace std;

/**
Leer 10 números y guardarlos en un vector.

Determinar e informar cuál es el menor de los impares y el mayor de los pares. Suponer que habrá al menos un
número par y uno impar.
*/

int main()
{

    const int TAM = 10;
    int vNumeros[TAM];
    int contPar, contImpar, maxPar, minImpar;
    contPar = contImpar = 0;

    /// LEER NUMEROS Y CARGARLOS EN VECTOR
    for(int i = 0; i < TAM; i++)
    {
        cin >> vNumeros[i];
    }

    for(int i = 0; i < TAM; i++)
    {
        if( (vNumeros[i])%2 == 0)
        {
            /// PARES
            contPar++;
            if(contPar==1)
            {
                maxPar = vNumeros[i];
            }
            else if(vNumeros[i] > maxPar)
            {
                maxPar = vNumeros[i];
            }
        }
        else
        {
            /// IMPARES
            contImpar++;
            if(contImpar==1)
            {
                minImpar = vNumeros[i];
            }
            else if(vNumeros[i] < minImpar)
            {
                minImpar = vNumeros[i];
            }
        }
    }

    cout << "Maximo par: " << maxPar << endl;
    cout << "Minimo impar: " << minImpar << endl;

    return 0;

}
