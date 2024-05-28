#include <iostream>
using namespace std;

/**
Dada una lista de números compuesta por 10 grupos y cada grupo separado del
siguiente por un cero, se pide determinar e informar:

a) Para cada uno de los grupos el máximo de los números pares y el máximo de los números impares. Se informan 2 resultados por cada grupo.

b) Para cada uno de los grupos el porcentaje de números negativos y números
positivos. Se informan 2 resultados por cada grupo.

c) Cuántos números positivos había en total entre los 10 grupos. Se informa 1 resultado al final.
*/

int main()
{
    int num;

    /// PTO A
    int maxPar, maxImpar;
    int contPar, contImpar;

    /// PTO B
    int total, contPos;
    float porcPos, porcNeg;

    /// PTO C
    int contTotalPos;


    /// NIVEL 1 - LOTE
    contTotalPos = 0;

    for(int i = 1; i <= 3; i++)
    {

        /// NIVEL 2 - GRUPO

        /// PTO A
        contPar = contImpar = 0;

        /// PTO B
        contPos = total = 0;

        cout << "Ingrese #: ";
        cin >> num;

        while( num != 0)
        {
            /// NIVEL 3 - NUMEROS

            /// PTO C
            if(num > 0){
                contTotalPos++;
            }

            /// PTO B
            total++;
            if(num > 0){
                contPos++;
            }

            /// PTO A
            if(num%2==0){
                contPar++;
                if(contPar==1){
                    maxPar = num;
                }
                else if(num > maxPar){
                    maxPar = num;
                }
            }
            else{
                contImpar++;
                if(contImpar==1){
                    maxImpar=num;
                }
                else if (num > maxImpar){
                    maxImpar = num;
                }
            }

            cout << "Ingrese #: ";
            cin >> num;
        }

        /// NIVEL 2 - GRUPO

        /// PTO B
        porcPos = (float)(contPos*100)/total;
        porcNeg = 100 - porcPos;

        /// PTO A
        if(contPar>0){
        cout << "Maximo par: " << maxPar << endl;
        }
        else{
            cout << "Sin pares" << endl;
        }
        if (contImpar > 0){
        cout << "Maximo impar: " << maxImpar << endl;
        }
        else{
            cout << "Sin impares" << endl;
        }

        /// PTO B
        if(total > 0){
            cout << "Porcentaje positivos: " << porcPos << "%" << endl;
            cout << "Porcentaje negativos: " << porcNeg << "%" << endl;
        }
        else{
            cout << "Sin numeros" << endl;
        }

    }
    /// NIVEL 1 - LOTE

    cout << "Total numeros positivos: " << contTotalPos << endl;
    return 0;

}
