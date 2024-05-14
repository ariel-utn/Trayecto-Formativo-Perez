#include <iostream>
using namespace std;

int main()
{
    int num, ant, contNum = 0;
    bool bandOrd = true;   /// true: conj ord. forma creciente

    cout << "Ingrese #: ";
    cin >> num;

    while ( num != 0) {
        contNum++;
        if(contNum > 1){
            if(num < ant){
                bandOrd = false;   /// false: no está ord. de forma creciente
            }
        }
        ant = num;

        ///
        cout << "Ingrese #: ";
        cin >> num;
    }

    if(bandOrd==true){
        cout << "Conjunto ordenado" << endl;
    }
    else{
        cout << "Conjunto no ordenado" << endl;
    }

    /// CTRL + D              ---> DUPLICAR LINEA
    /// ALT + FLECHITA        ---> DESPLAZAR LINEA

    return 0;

}
