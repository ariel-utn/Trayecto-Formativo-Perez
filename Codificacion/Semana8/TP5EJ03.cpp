#include <iostream>
using namespace std;

/**

HACER UN PROGRAMA PARA INGRESAR UNA LISTA DE N�MEROS QUE FINALIZA CUANDO SE
INGRESA UN CERO Y LUEGO INFORMAR EL PORCENTAJE DE N�MEROS PRIMOS Y EL PORCENTAJE
DE N�MEROS NO PRIMOS. SE INFORMAN 2 RESULTADOS AL FINAL.

*/

int main()
{

    int num;
    int cd;
    int contPrimo = 0;
    int total = 0;
    float porcPrimo, porcNoPrimo;

    cout << "Ingrese numero: ";
    cin >> num;

    while ( num != 0 )
    {
        total++;

        /// PRIMO
        cd = 0;
        for(int j = 1; j <= num; j++)
        {
            if(num%j==0)
            {
                cd++;
            }
        }
        if(cd==2)
        {
            contPrimo++;
        }

        cout << "Ingrese numero: ";
        cin >> num;
    }

    if(total>0){
    /// CALCULO LOS PORCENTAJES
    porcPrimo = (float)(contPrimo*100)/total;
    ///porcNoPrimo = (total-contPrimo)*100/total;
    porcNoPrimo = 100 - porcPrimo;

    cout << "Total primos: " << porcPrimo << "%" << endl;
    cout << "Total no-primos: " << porcNoPrimo << "%" << endl;
    }
    else{
        cout << "Sin numeros" << endl;
    }

    return 0;

}
