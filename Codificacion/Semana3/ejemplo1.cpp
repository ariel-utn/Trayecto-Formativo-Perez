/// Nombre y Apellido:
/// Guia N°: 2
/// Ejercicio N°: 5
/// Enunciado:

/**
Un negocio de perfumería efectúa descuentos según el importe de la
venta.

Si el importe es menor a $100 aplicar un descuento del 5%.
Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%.
Si el importe es mayor a $500 aplicar un descuento del 15%.

Hacer un programa donde se ingresa el importe original sin descuento y
se informe por pantalla el importe con el descuento ya aplicado.

Importante: Verifique que el programa emita UN SOLO CARTEL

*/

#include <iostream>

using namespace std;

int main(){

    float importeSinDescuento, importeConDescuento;
    float descuentoAplicado;

    cout << "Ingrese importe sin descuento: ";
    cin >> importeSinDescuento;

    ///
    if(importeSinDescuento < 100){
        /// 5%
        descuentoAplicado = importeSinDescuento * 5/100;
    }
    else if( (importeSinDescuento >= 100) && (importeSinDescuento <= 500)){
        /// 10%
        descuentoAplicado = importeSinDescuento * 10/100;
    }
    else{
        /// 15%
        descuentoAplicado = importeSinDescuento * 15/100;
    }

    importeConDescuento = importeSinDescuento - descuentoAplicado;

    cout << "El importe a pagar es: " << importeConDescuento << endl;

    return 0;
}
