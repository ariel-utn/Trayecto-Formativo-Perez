/// Nombre:
/// TP N°:
/// EJ N°:
/// Enunciado:

/// EJEMPLO IF SECUENCIALES

/// OPERADORES RELACIONALES

///     >  Mayor que            A > B
///     <  Menor que            A < B
///     >= Mayor o igual que    A >= B
///     <= Menor o igual que    A <= B
///     != Diferente de         A != B
///     == Igual a              A == B

#include <iostream>

using namespace std;

int main(){

    float num;

    cout << "Ingrese un numero: ";
    cin >> num;

    if(num > 0){
        cout << "El numero es positivo" << endl;
    }

    if(num < 0){
        cout << "El numero es negativo" << endl;
    }

    if(num == 0){
        cout << "El numero es cero" << endl;
    }

    return 0;
}
