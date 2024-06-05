#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar 10 numeros.

Luego calcular el promedio y a continuación

mostrar por pantalla los valores que son mayores al promedio.

*/

int main()
{
    int num1, suma = 0;

    float prom;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Ingrese #: ";
        cin >> num1;

        suma += num1;
    }

    prom = (float)suma/10;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Ingrese #: ";
        cin >> num1;

        if(num1>prom)
        {
            cout << num1 << endl;
        }
    }

    return 0;

}
