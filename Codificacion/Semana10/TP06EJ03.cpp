#include <iostream>
using namespace std;

/**
Leer 10 números y guardarlos en un vector. Determinar e informar cuál es el valor
máximo y su posición dentro del vector.

*/

int main()
{
    const int TAM = 10;
    int vNumeros[TAM];

    /// LEER NUMEROS Y CARGARLOS EN VECTOR
    for(int i = 0; i < TAM; i++)
    {
        cin >> vNumeros[i];
    }

    /// DETERMINAR EL MAXIMO --> USANDO VALORES

//    int maximo = vNumeros[0];
//    int pos = 1;
//    for(int r = 1; r < TAM; r++){
//        if(vNumeros[r] > maximo){
//            maximo = vNumeros[r];
//            pos = r + 1;
//        }
//    }

    /// DETERMINAR EL MAXIMO --> USANDO INDICES
//    int indiceMaximo = 0;
//    for(int r = 1; r < TAM; r++){
//        if(vNumeros[r] > vNumeros[indiceMaximo]){
//            indiceMaximo = r;
//        }
//    }

    int maximo;
    int pos;
    for(int r = 0; r < TAM; r++) {
        if( (r==0) || (vNumeros[r] > maximo) )
        {
            maximo = vNumeros[r];
            pos = r + 1;
        }
    }

    cout << "El maximo es: " << maximo << " en la posicion: "  << pos;


    return 0;

}
