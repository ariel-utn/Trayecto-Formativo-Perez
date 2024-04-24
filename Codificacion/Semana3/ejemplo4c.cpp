/// Nombre y Apellido:
/// Guia N°: 2
/// Ejercicio N°: 15
/// Enunciado:

/**
UN AñO ES BISIESTO:

A) SI ES MúLTIPLO DE 4,
B) EXCEPTUANDO A LOS AñOS QUE SON MúLTIPLOS DE 100
C) PERO QUE NO SEAN MúLTIPLOS DE 400.

ESTO úLTIMO SIGNIFICA QUE EL AñO 1900 NO ES BISIESTO,
PERO EL AñO 2000 Sí LO ES.


HACER UN PROGRAMA PARA INGRESAR UN AñO Y LISTAR POR
PANTALLA SI ES BISIESTO O NO LO ES.

EJEMPLO A. SI SE INGRESA EL AñO 2020 SE INDICARá COMO BISIESTO.
EJEMPLO B. SI SE INGRESA EL AñO 2019 SE INDICARá COMO NO BISIESTO.
EJEMPLO C. SI SE INGRESA EL AñO 1800 O 1900 SE INDICARá COMO NO BISIESTO.
EJEMPLO D. SI SE INGRESA EL AñO 1600 O 2000 SE INDICARá COMO BISIESTO.

    TABLA DE LA VERDAD ==> AND
    V && V = V
    V && F = F
    F && V = F
    F && F = F

    TABLA DE LA VERDAD ==> OR
    V || V = V
    V || F = V
    F || V = V
    F || F = F

*/

#include <iostream>

using namespace std;

int main()
{

    int anio;

    cout << "Ingrese el anio: ";
    cin >> anio;

    if( (anio%4 == 0) && ( anio%100 != 0 || anio%400 == 0) )

    {
        cout << "Es bisiesto" << endl;
    }
    else
    {
        cout << "No es bisiesto" << endl;
    }

    return 0;
}
