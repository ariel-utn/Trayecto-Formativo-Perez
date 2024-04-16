/// Nombre:
/// TP N°:
/// EJ N°:
/// Enunciado:

/**

Una granja vende la caja de 12 unidades a $ 100 y cada huevo suelto a $ 12. Hacer
un programa para ingresar la cantidad de huevos que compra un cliente y mostrar
por pantalla el importe total a pagar.

Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se
calcula como suelto.

*/

#include <iostream>

using namespace std;

int main()
{

    int cantVendida;
    int cantCajas;      /// 100 c/caja
    int cantUnidades;   /// 12 c/u

    float importe;

    cout << "Ingrese cantidad vendida: ";
    cin >> cantVendida;

    cout << endl;

    /// DETERMINAR LA CANTIDAD DE UNIDADES
    cantUnidades = cantVendida%12; /// OBTENGO EL RESTO

//    cout << "Unidades: " << cantUnidades << endl;

    /// DETERMINAR LA CANTIDAD DE CAJAS
    cantCajas = (cantVendida - cantUnidades)/12;

//    cout << "Cajas: " << cantCajas << endl;

    importe = (cantCajas * 100) + (cantUnidades * 12);

    cout << "Importe: " << importe << endl;

    return 0;
}
