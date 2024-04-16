/// Nombre:
/// TP N°:
/// EJ N°:
/// Enunciado:

#include <iostream>

using namespace std;

int main()
{

    int acumulador = 87;
    int contador = 5;

    float promedio;

    promedio = acumulador/contador;

    /// int/int = int
    /// float/int = float
    /// int/float = float
    /// float/float = float

    cout << "Promedio: " << promedio << endl;

    /// CASTEO
    promedio = (float)acumulador/contador;

    cout << "Promedio: " << promedio << endl;



    return 0;
}
