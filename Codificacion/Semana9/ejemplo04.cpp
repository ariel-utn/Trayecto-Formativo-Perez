#include <iostream>
using namespace std;

/**
Leer 10 números y guardarlos en un vector.
Calcular el promedio y luego
mostrar por pantalla los valores que son mayores al promedio.

*/

int main()
{
    float promedio;
    int sumatoria = 0;

    const int TAM = 200;
    int mi_vector[TAM];

    /// EL USUARIO INGRESA LOS VALORES
    for (int i = 0; i < TAM; i++){
        cin >> mi_vector[i];
    }

    /// SUMAR LOS VALORES DEL VECTOR
    for (int i = 0; i < TAM; i++){
        sumatoria += mi_vector[i];
    }

    /// PROMEDIO
    promedio = (float)sumatoria/TAM;

    cout << endl;
    /// MOSTRAR LOS NUMEROS MAYORES AL PROMEDIO
    for (int i = 0; i < TAM; i++){
        if(mi_vector[i]>promedio)
            cout << mi_vector[i] << endl;
    }
    return 0;

}
