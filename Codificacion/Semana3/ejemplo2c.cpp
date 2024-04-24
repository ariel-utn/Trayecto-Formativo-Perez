/// Nombre y Apellido:
/// Guia N°:
/// Ejercicio N°:
/// Enunciado:

/**

Hacer un programa para ingresar tres números y listar el máximo de ellos.


METODO DEL ABSURDO, DARLE VALOR INICIAL A LA VARIABLE MAXIMO UN NUMERO "MUY NEGATIVO" DE MANERA TAL QUE "CUALQUIER" VALOR INGRESADO POR EL USUARIO VA A SER MAYOR EL VALOR INICIAL DE ESA VARIBLE, INCLUSO SI LA SECUENCIA DE NUMEROS INGREADOS SON TODOS NEGATIVOS (EJ. -6, -3 Y -7).

ESTE METODO NO ES MUY RECOMENDABLE.

*/

#include <iostream>

using namespace std;

int main(){

    int maximo;
    int num1, num2, num3;

    cout << "Ingrese #1: ";
    cin >> num1;

    maximo = num1;

    cout << "Ingrese #2: ";
    cin >> num2;

    if(num2 > maximo){
        maximo = num2;
    }

    cout << "Ingrese #3: ";
    cin >> num3;

    if(num3 > maximo){
        maximo = num3;
    }

    cout << "El valor maximo fue: " << maximo <<    endl;


    return 0;
}
