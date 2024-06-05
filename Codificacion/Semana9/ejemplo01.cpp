#include <iostream>
using namespace std;

/**
Hacer un programa para ingresar 10 numeros.

Luego calcular el promedio y a continuación

mostrar por pantalla los valores que son mayores al promedio.

*/

int main()
{

    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, suma;

    float prom;

    cout << "Ingrese #: ";
    cin >> num1;

    cout << "Ingrese #: ";
    cin >> num2;

    cout << "Ingrese #: ";
    cin >> num3;

    cout << "Ingrese #: ";
    cin >> num4;

    cout << "Ingrese #: ";
    cin >> num5;

    cout << "Ingrese #: ";
    cin >> num6;

    cout << "Ingrese #: ";
    cin >> num7;

    cout << "Ingrese #: ";
    cin >> num8;

    cout << "Ingrese #: ";
    cin >> num9;

    cout << "Ingrese #: ";
    cin >> num10;

    suma = num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;

    prom = (float)suma/10;

    if(num1>prom)
    {
        cout << num1 << endl;
    }

    if(num2>prom)
    {
        cout << num2 << endl;
    }

    if(num3>prom)
    {
        cout << num3 << endl;
    }

    if(num4>prom)
    {
        cout << num4 << endl;
    }

    if(num5>prom)
    {
        cout << num5 << endl;
    }

    if(num6>prom)
    {
        cout << num6 << endl;
    }

    if(num7>prom)
    {
        cout << num7 << endl;
    }

    if(num8>prom)
    {
        cout << num8 << endl;
    }

    if(num9>prom)
    {
        cout << num9 << endl;
    }

    if(num10>prom)
    {
        cout << num10 << endl;
    }


    return 0;

}
