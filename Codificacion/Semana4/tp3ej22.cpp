/**

Dada una lista de 7 números informar el primer número par ingresado y
su ubicación en la lista y el último de los números primos y su ubicación
en la lista. Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:
Primer número par: 4 ubicación 2. Último primo: 13 ubicación 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:
Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5


*/

#include <iostream>
using namespace std;

int main()
{

    int i, j, num, primerPar, posPar = -1, ultimoPrimo, posPrimo = -1, contDiv;
    bool bpar = false;

    /// ES PARA PEDIR 7 NUMEROS
    for(i = 1;  i <= 7; i++)
    {

        cout << "Ingrese un numero: ";
        cin >> num;

        /// PRIMER PAR
        if( (num%2 == 0) && (bpar==false) )
        {
            primerPar = num;
            posPar = i;
            bpar = true;
        }
        /// ULTIMO PRIMO
        contDiv = 0;
        /// PARA EVALUAR LOS DIVISORES DE CADA NUMERO INGRESADO
        for(j = 1;  j <= num; j++)
        {
            if( (num%j == 0) )
            {
                contDiv++;
            }
        }
        if(contDiv ==2 )
        {
            ultimoPrimo = num;
            posPrimo = i;
        }
    }

    if(posPar != -1)
    {
        cout << "El primer par es " << primerPar;
        cout << " en la ubicación " << posPar << endl;
    }
    else
    {
        cout << "Lista sin pares" << endl;
    }
    if(posPrimo != -1){
        cout << "El ultimo primo es " << ultimoPrimo;
        cout << " en la ubicacion " << posPrimo << endl;
    }
    else{
        cout << "Lista sin primos" << endl;
    }



    return 0;

}
