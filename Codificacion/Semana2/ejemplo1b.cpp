/// Nombre:
/// TP N°:
/// EJ N°:
/// Enunciado:

/**
6. Hacer un programa para que un comercio ingrese por teclado la recaudación en
pesos para cada una de las cuatro semanas del mes.

El programa debe listar:
A) la recaudación promedio por semana y
B) el porcentaje de recaudación por semana.

Ejemplo. Si se ingresan $ 1600, $ 1200, $ 4800 y $ 400 se listará como recaudación
promedio $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%

*/


/**
    ACUMULADORES
    Se utiliza para acumular o sumar cantidades.
    - Hay que darle un valor inicial. Generalmente inicializamos en cero.
    - Acumulan o suman cantidades variables.
    - Siempre funcionan bajo una condición.

    CONTADORES
    Se utiliza para contar cantidades.
    - Hay que darle un valor inicial. Generalmente inicializamos en cero.
    - Siempre cuenta en una cantidad fija.
    - Siempre funcionan bajo una condición.

*/
#include <iostream>

using namespace std;

int main()
{

    float sem1, sem2, sem3, sem4, suma;
    /// PTOA
    float promedio;                     /// PROMEDIOS Y PORCENTAJES SON SIEMPRE FLOAT
    /// PTOB
    float porc1, porc2, porc3, porc4;

    cout << "Ingrese recaudacion semana #1: ";
    cin >> sem1;

    cout << "Ingrese recaudacion semana #2: ";
    cin >> sem2;

    cout << "Ingrese recaudacion semana #3: ";
    cin >> sem3;

    cout << "Ingrese recaudacion semana #4: ";
    cin >> sem4;


    /// PTOA
    suma = sem1 + sem2 + sem3 +sem4;

    ///promedio = (sem1 + sem2 +sem3 + sem4)/4;
    promedio = suma/4;

    /// PTOB
    porc1 = (sem1*100)/suma;
    porc2 = (sem2*100)/suma;
    porc3 = (sem3*100)/suma;
    porc4 = (sem4*100)/suma;


    cout << "A) Promedio semanal: " << promedio << endl;

    cout << endl;

    cout << "B) Porcentaje semana #1: " << porc1 << endl;
    cout << "B) Porcentaje semana #2: " << porc2 << endl;
    cout << "B) Porcentaje semana #3: " << porc3 << endl;
    cout << "B) Porcentaje semana #4: " << porc4 << endl;

    return 0;
}
