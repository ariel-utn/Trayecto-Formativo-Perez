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

    float sem1, sem2, sem3, sem4;
    /// PTOA
    float promedio;                     /// PROMEDIOS Y PORCENTAJES SON SIEMPRE FLOAT
    float recaudacionTotal = 0;
    int cantidadSemanas = 0;
    /// PTOB
    float porc1, porc2, porc3, porc4;

    cout << "Ingrese recaudacion semana #1: ";
    cin >> sem1;

    ///recaudacionTotal = recaudacionTotal + sem1;
    recaudacionTotal += sem1;
    ///cantidadSemanas = cantidadSemanas +1;
    ///cantidadSemanas += 1;
    cantidadSemanas++;


    cout << "Ingrese recaudacion semana #2: ";
    cin >> sem2;

    recaudacionTotal += sem2;
    cantidadSemanas++;

    cout << "Ingrese recaudacion semana #3: ";
    cin >> sem3;

    recaudacionTotal += sem3;
    cantidadSemanas++;

    cout << "Ingrese recaudacion semana #4: ";
    cin >> sem4;

    recaudacionTotal += sem4;
    cantidadSemanas++;

//    cout << "Recaudacion total: " << recaudacionTotal << endl;
//    cout << "Cantidad semanas: " << cantidadSemanas << endl;

    /// PTOA
    promedio = recaudacionTotal/cantidadSemanas; /// float/int = float

    /// PTOB
    porc1 = (sem1*100)/recaudacionTotal;
    porc2 = (sem2*100)/recaudacionTotal;
    porc3 = (sem3*100)/recaudacionTotal;
    porc4 = (sem4*100)/recaudacionTotal;


    cout << "A) Promedio semanal: " << promedio << endl;

    cout << endl;

    cout << "B) Porcentaje semana #1: " << porc1 << endl;
    cout << "B) Porcentaje semana #2: " << porc2 << endl;
    cout << "B) Porcentaje semana #3: " << porc3 << endl;
    cout << "B) Porcentaje semana #4: " << porc4 << endl;

    return 0;
}
