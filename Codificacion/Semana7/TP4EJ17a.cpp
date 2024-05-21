#include <iostream>
using namespace std;

int main(){

    int num = 0, maxNumero = 0;
    int contPos = 0;
    ///int contNumeros = 0;

    while(contPos < 2){

        /// PROCESAMIENTO DE LOS NUMEROS
        /**
        if(contNumeros==1){
            maxNumero = num;
        }
        else if(num > maxNumero){
            maxNumero = num;
        }
        */

        if(num > maxNumero){
            maxNumero = num;
        }

        cout << "Ingrese #: ";
        cin >> num;
        ///contNumeros++;

        /// VALIDACION DE SALIDA DEL CICLO WHILE
        if(num > 0){
            contPos++;
        }
        else{
            contPos = 0;
        }
    }

    cout << "El maximo es: " << maxNumero << endl;


return 0;

}
