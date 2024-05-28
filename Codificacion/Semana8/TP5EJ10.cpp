#include <iostream>
using namespace std;

int main()
{
    int num;

    /// NIVEL 1 -> LOTE

    /// PTO A
    int cd, contPrimo;
    bool bprimo;
    int contGrupoPrimosCons = 0;

    /// PTO B
    int contNeg, maxNeg1, posMaxNeg1, maxNeg2, posMaxNeg2, contPosiciones;

    /// PTO C
    int contPrimoTotal = 0, contGrupo = 0;
    int maxPrimo, maxPrimoGrupo, maxPrimoPosicion;

    cout << "Ingrese #: ";
    cin >> num;

    while(num != 0)
    {
        /// NIVEL 2 -> GRUPO

        /// PTO A
        contPrimo = 0;
        bprimo = false;

        /// PTO B
        contNeg = 0;
        contPosiciones = 0;

        /// PTO C
        contGrupo++;

        while (num != 0)
        {
            /// NIVEL 3 -> LEO TODOS LOS NUMEROS

            /// PTO B
            contPosiciones++;

            /// PTO A - PRIMO
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

                /// PTO C
                contPrimoTotal++;
                if(contPrimoTotal==1){
                    maxPrimo = num;
                    maxPrimoGrupo = contGrupo;
                    maxPrimoPosicion = contPosiciones;
                }
                else if(num > maxPrimo){
                    maxPrimo = num;
                    maxPrimoGrupo = contGrupo;
                    maxPrimoPosicion = contPosiciones;
                }
            }
            else{
                contPrimo = 0;
            }
            if(contPrimo==4){
                bprimo =true;
            }

            /// PTO B

            if(num < 0){
                contNeg++;
                if(contNeg==1){
                    maxNeg1 = num;
                    posMaxNeg1 = contPosiciones;
                    maxNeg2 = num;
                    posMaxNeg2 = contPosiciones;
                }
                else if(num > maxNeg1){
                    maxNeg2 = maxNeg1;
                    posMaxNeg2 = posMaxNeg1;
                    maxNeg1 = num;
                    posMaxNeg1 = contPosiciones;
                }
                else if( (num > maxNeg2) || contNeg==2){
                    maxNeg2 = num;
                    posMaxNeg2 = contPosiciones;
                }
            }

            ///
            cout << "Ingrese #: ";
            cin >> num;
        }

        /// NIVEL 2 -> INFO X GRUPO

        /// PTO A
        if(bprimo==true){
            contGrupoPrimosCons++;
        }

        /// PTO B
        if (contNeg > 0){
            cout << "Maximo negativo 1: " << maxNeg1 << " en la posicion: " << posMaxNeg1 << endl;
            cout << "Maximo negativo 2: " << maxNeg2 << " en la posicion: " << posMaxNeg2 << endl;
        }
        else{
            cout << "Grupo sin negativos" << endl;
        }

        cout << "--------------" << endl;

        ///
        cout << "Ingrese #: ";
        cin >> num;
    }

    /// NIVEL 1 -> INFO LOTE

    /// PTO A
    cout << "Total de grupos con 4 primos consecutivos: " << contGrupoPrimosCons << endl;

    /// PTO C
    cout << "Maximo primo: " << maxPrimo << " del grupo: " << maxPrimoGrupo << " en la posicion: " << maxPrimoPosicion << endl;


    return 0;

}
