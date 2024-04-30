/**
Dada una lista de 7 números informar cual es

    el primer,
    el segundo,
    el anteúltimo y
    el último número impar ingresado.

Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa:
    Primer impar: -5,
    Segundo impar: 7,
    Anteúltimo impar: 9 y
    Último impar: 5.

*/

#include <iostream>
using namespace std;

int main()
{

    int num, i, ultimo = 0, anteultimo = 0, primero, segundo;
    int cimpar = 0;

    for (i = 1; i <= 7; i++)
    {
        cout << "Ingrese #: ";
        cin >> num;

        if ( num%2 != 0 )
        {
            cimpar++;
            anteultimo = ultimo;
            ultimo = num;
            if(cimpar==1){
                primero = num;
            }
            else if(cimpar ==2){
                segundo = num;
            }
        }
    }
    if (cimpar != 0)
    {
        if( cimpar < 2)
        {
            cout << "Primer impar: " << primero << endl;
            cout << "Ultimo impar: " << ultimo << endl;
        }
        else{
            cout << "Primer impar: " << primero << endl;
            cout << "Segundo impar: " << segundo << endl;
            cout << "Anteultimo impar: " << anteultimo << endl;
            cout << "Ultimo impar: " << ultimo << endl;
        }
    }
    else{
        cout << "Lista sin impares" << endl;
    }

    return 0;

}
