#include <iostream>
using namespace std;

int main()
{
    const int TAM = 5;
    int idPieza, cantidadProducida;
    int vProduccion[TAM] {};
    /**
    int acu1, acu2, acu3, acu4, acu5;
    acu1 = acu2 = acu3 = acu4 = acu5 = 0;
    */

    cout << "ID Pieza: ";
    cin >> idPieza;

    while(idPieza != 0)
    {
        cout << "Cantidad producida: ";
        cin >> cantidadProducida;

        /**
        switch(idPieza)
        {
        case 1:
            vProduccion[0]+=cantidadProducida;
            break;
        case 2:
            vProduccion[1]+=cantidadProducida;
            break;
        case 3:
            vProduccion[2]+=cantidadProducida;
            break;
        case 4:
            vProduccion[3]+=cantidadProducida;
            break;
        case 5:
            vProduccion[4]+=cantidadProducida;
            break;

        }
        */

        vProduccion[idPieza-1]+= cantidadProducida;

        ///
        cout << "ID Pieza: ";
        cin >> idPieza;
    }

    cout << endl << endl;

//    cout << "Pieza 1: " << vProduccion[0] << " unidades producidas" << endl;
//    cout << "Pieza 2: " << vProduccion[1] << " unidades producidas" << endl;
//    cout << "Pieza 3: " << vProduccion[2] << " unidades producidas" << endl;
//    cout << "Pieza 4: " << vProduccion[3] << " unidades producidas" << endl;
//    cout << "Pieza 5: " << vProduccion[4] << " unidades producidas" << endl;

    for(int i = 0; i < TAM; i++){
        cout << "Pieza " << i+1<< ": " << vProduccion[i] << " unidades producidas" << endl;
    }

    return 0;
}
