/// Nombre:
/// TP N°:
/// EJ N°:
/// Enunciado:

/** Hacer un programa que permita cargar la letra
    inicial de un color de semaforo e indique que
    debe hacer el peaton en cada uno de los casos
*/

#include <iostream>

using namespace std;

int main()
{
    char colorSemaforo;  /// VARIABLE SELECTORA DEL SWITCH

    cout << "Ingrese color de semaforo: ";
    cin >> colorSemaforo;

    switch(colorSemaforo))/// tolower() toupper()
    {
    case 'r':
    case 'R':
        cout << "Detenga el paso" << endl;
        break;
    case 'a':
    case 'A':
        cout << "Mire a ambos lados antes de cruzar" << endl;
        break;
    case 'v':
    case 'V':
        cout << "Puede cruzar la calle" << endl;
        break;
    default:
        cout << "Opcion invalida" << endl;
        break;
    }

    return 0;
}
