#include <iostream>
using namespace std;

int main(){

    char letra;
    int num;

    cout << "Ingrese 'c' para continuar y 's' para salir: ";
    cin >> letra;

    while ( letra != 's'){

        cout << "Ingrese numero: ";
        cin >> num;

        cout << "Ingrese 'c' para continuar y 's' para salir: ";
        cin >> letra;
    }

return 0;

}
