/// Nombre y Apellido:
/// Guia N°:
/// Ejercicio N°:
/// Enunciado:

/**
Hacer un programa para ingresar cinco números y listar cuantos de esos
cinco números son positivos, cuantos son negativos y cuantos son iguales
a 0.


CONTADOR.
ES UNA VARIABLE QUE SE UTILIZA PARA CONTADOR.
- ESTABLECER UN VALOR INICIAL.GENERALMENTE DAMOS EL VALOR INICIAL CERO.
- SE INCREMENTA/DECREMENTA DE MANERA CONSTANTE CONSTANTE. GENERALMENTE DE 1 EN 1.
- SIEMPRE LO USAMOS BAJO UNA CONDICION


PARA CONTAR DE UNO EN UNO
    VAR++               // UNICAMENTE INCREMENTA DE 1 EN 1
    VAR = VAR + 1
    VAR += 1;

    VAR--               // UNICAMENTE DECREMENTA DE 1 EN 1
    VAR = VAR - 1
    VAR -= 1

*/

#include <iostream>

using namespace std;

int main()
{

    int cpos = 0;
    int cneg = 0;
    int ccero = 0;
    int num;

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

    cout << "Total positivos: " << cpos << endl;
    cout << "Total negativos: " << cneg << endl;
    cout << "Total ceros: " << ccero << endl;

    return 0;
}
