/// Nombre:
/// TP N°:
/// EJ N°:
/// Enunciado:


/// OPERADORES RELACIONALES

///     >  Mayor que            A > B
///     <  Menor que            A < B
///     >= Mayor o igual que    A >= B
///     <= Menor o igual que    A <= B
///     != Diferente de         A != B
///     == Igual a              A == B

#include <iostream>

using namespace std;

int main()
{

    float num;

    cout << "Ingrese un numero: ";
    cin >> num;

    /// EJEMPLO IF ANIDADOS

    if(num > 0) {
        cout << "El numero es positivo" << endl;
    }
    else {
        if(num == 0) {
            cout << "El numero es cero" << endl;
        }
        else {
            cout << "El numero es negativo" << endl;
        }
    }

    return 0;
}
