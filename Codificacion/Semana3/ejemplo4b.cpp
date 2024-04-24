/// Nombre y Apellido:
/// Guia N∞: 2
/// Ejercicio N∞: 15
/// Enunciado:

/**
UN AÒO ES BISIESTO:

A) SI ES M˙LTIPLO DE 4,
B) EXCEPTUANDO A LOS AÒOS QUE SON M˙LTIPLOS DE 100
C) PERO QUE NO SEAN M˙LTIPLOS DE 400.

ESTO ˙LTIMO SIGNIFICA QUE EL AÒO 1900 NO ES BISIESTO,
PERO EL AÒO 2000 SÌ LO ES.


HACER UN PROGRAMA PARA INGRESAR UN AÒO Y LISTAR POR
PANTALLA SI ES BISIESTO O NO LO ES.

EJEMPLO A. SI SE INGRESA EL AÒO 2020 SE INDICAR· COMO BISIESTO.
EJEMPLO B. SI SE INGRESA EL AÒO 2019 SE INDICAR· COMO NO BISIESTO.
EJEMPLO C. SI SE INGRESA EL AÒO 1800 O 1900 SE INDICAR· COMO NO BISIESTO.
EJEMPLO D. SI SE INGRESA EL AÒO 1600 O 2000 SE INDICAR· COMO BISIESTO.

*/

#include <iostream>

using namespace std;

int main()
{

    int anio;

    cout << "Ingrese el anio: ";
    cin >> anio;

    if( anio%4 == 0)
    {

        if( anio%100 != 0 || anio%400 == 0)
        {
            cout << "Es bisiesto" << endl;
        }
        else
        {
            cout << "No es bisiesto" << endl;
        }
    }
    else
    {
        cout << "No es bisiesto" << endl;
    }

    return 0;
}
