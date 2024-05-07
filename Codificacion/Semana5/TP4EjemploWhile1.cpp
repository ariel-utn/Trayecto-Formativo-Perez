#include <iostream>
using namespace std;

int main(){

    /**
    HACER UN PROGRAMA QUE PERMITA INGRESAR UNA LISTA DE
    NUMEROS QUE FINALIZA CUANDO SE INGRESA UN NUMERO CERO.
    LUEGO CALCULAR Y MOSTRAR CUANTOS NUMEROS FUERON INGRESADOS.


    VALOR CENTINELA -> ES AQUEL QUE PERMITE SALIR DEL CICLO INEXACTO

    */

    int num;
    int totalIngresos = 0;

    cout << "Ingrese un numero: ";
    cin >> num;

    while ( num != 0 ){

        totalIngresos++;

        cout << "Ingrese un numero: ";
        cin >> num;
    }

    cout << "Total de numeros ingresados: " << totalIngresos << endl;




return 0;

}
