#include <iostream>
using namespace std;

int main()
{
    int idPieza, cantidadProducida;

    const int TAM = 5;
    /// DECLARO UN VECTOR EN CERO
    int vProduccion[TAM] {};

    cout << "ID Pieza: ";
    cin >> idPieza;

    while(idPieza != 0)
    {
        cout << "Cantidad producida: ";
        cin >> cantidadProducida;

        /// ACUMULO LA CANTIDAD PRODUCIDA DADO EL IDPIEZA
        vProduccion[idPieza-1]+= cantidadProducida;

        ///
        cout << "ID Pieza: ";
        cin >> idPieza;
    }

    cout << endl << endl;

    /// MUESTRO LA CANTIDAD PRODUCIDA POR CADA PIEZA
    for(int i = 0; i < TAM; i++){
        cout << "Pieza " << i+1<< ": " << vProduccion[i] << " unidades producidas" << endl;
    }

    return 0;
}
