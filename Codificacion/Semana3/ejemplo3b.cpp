/// Nombre y Apellido:
/// Guia N°:
/// Ejercicio N°:
/// Enunciado:

#include <iostream>

using namespace std;

int main()
{

    int num = 5;

    cout << endl;
    cout << "POSTINCREMENTADOR (VAR++)" << endl;
    cout << "El numero es: " << num << endl;
    cout << "El numero es: " << num++ << endl;
    cout << "El numero es: " << num << endl;

    num = 5;
    cout << endl;
    cout << "PREINCREMENTADOR (++VAR)" << endl;
    cout << "El numero es: " << num << endl;
    cout << "El numero es: " << ++num << endl;

    num = 5;
    cout << endl;
    cout << "POSTINCREMENTADOR (VAR--)" << endl;
    cout << "El numero es: " << num << endl;
    cout << "El numero es: " << num-- << endl;
    cout << "El numero es: " << num << endl;

    num = 5;
    cout << endl;
    cout << "PREINCREMENTADOR (--VAR)" << endl;
    cout << "El numero es: " << num << endl;
    cout << "El numero es: " << --num << endl;


    return 0;
}
