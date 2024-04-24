/// Nombre y Apellido:
/// Guia N°:
/// Ejercicio N°:
/// Enunciado:

/**

Hacer un programa para ingresar tres números y listar el máximo de ellos.


ESTA SOLUCION TIENE UN ERROR.

AL PONER MAXIMO = 0, EN UNA SERIE DE TRES NUMEROS INGRESADOS TODOS NEGATIVOS, VA A MOSTRAR POR PANTALLA COMO MAXIMO AL CERO, EL CUAL NO FUE UN INGRESO DEL USUARIO.

PROBAR CON LA SIGUIENTE SUCUENCIA DE NUMEROS: -6, -3 Y -7

*/

#include <iostream>

using namespace std;

int main(){

    int maximo = 0;
    int num1, num2, num3;

    cout << "Ingrese #1: ";
    cin >> num1;

    if(num1 > maximo){
        maximo = num1;
    }

    cout << "Ingrese #2: ";
    cin >> num2;

    if(num2 > maximo){
        maximo = num2;
    }

    cout << "Ingrese #2: ";
    cin >> num3;

    if(num3 > maximo){
        maximo = num3;
    }

    cout << "El valor maximo fue: " << maximo <<    endl;


    return 0;
}
