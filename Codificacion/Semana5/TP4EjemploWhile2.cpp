#include <iostream>
using namespace std;

int main(){

    int num;

//    while(--proposicion logica--){
//        --cuerpo--
//    }


/*
    while( num <= 10 ){
        cout << "Hola" << endl;
        num++;
    }

    cout << "Valor final de NUM: " << num << endl;

*/

    /**
    HACER UN PROGRAMA QUE PERMITA INGRESAR UNA LISTA DE NUMEROS
    QUE FINALIZA CUANDO SE INGRESA UN CERO. LUEGO CALCULAR Y MOSTRAR
    LA CANTIDAD DE NUMEROS POSITIVOS INGRESADOS.
    */

    int contPositivos;

    cout << "Ingrese un numero: ";
    cin >> num;

    while( num != 0 ){

        if(num > 0){
            contPositivos++;
        }

        ///
        cout << "Ingrese un numero: ";
        cin >> num;
    }

    cout << "Total de numeros positivos: " << contPositivos << endl;

return 0;

}
