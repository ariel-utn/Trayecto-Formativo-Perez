#include <iostream>
using namespace std;

/**

HACER UN PROGRAMA PARA INGRESAR UNA LISTA DE 10 NúMEROS Y LUEGO INFORMAR
CUáNTOS DE LOS NúMEROS INGRESADOS SON PRIMOS. SE INFORMA 1 RESULTADO AL FINAL.

*/

int main()
{

    int num;
    int cd;
    int contPrimo = 0;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Ingrese numero: ";
        cin >> num;

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

    }
    cout << "Total de numeros primos: " << contPrimo << endl;

    return 0;

}
