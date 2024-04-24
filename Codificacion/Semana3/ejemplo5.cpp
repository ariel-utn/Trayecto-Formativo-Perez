/// Nombre y Apellido:
/// Guia N∞:
/// Ejercicio N∞: 19
/// Enunciado:

/**
ESTE EJERCICIO LO RESOLVER·N EN LA PARTE DE CÛDIGO DE LA MATERIA.

EL COSTO DE UN DESARROLLO DE UN PROYECTO DE SOFTWARE SE CALCULA EN
BASE AL LENGUAJE QUE SE NECESITA:

NOMBRE    TIPO    VALOR HORA
C/C++     'C'     $ 7500
C#        '#'     $ 6100
PYTHON    'P'     $ 5400
GO        'G'     $ 5000

ADEM·S, SI EL PROYECTO ES MARCADO COMO URGENTE, SE LE AUMENTA UN 120
% M·S AL COSTO DEL PROYECTO.

LE SOLICITAN UN PROGRAMA QUE PERMITA CALCULAR EL COSTO TOTAL DE UN
PROYECTO BASADO EN

- LA CANTIDAD DE HORAS (INT),
- EL TIPO DE LENGUAJE (CHAR) Y
- SI ES URGENTE O NO (BOOL)

*/


#include <iostream>

using namespace std;

int main(){

    int cantidadHoras;
    char tipoLenguaje;
    bool esUrgente;

    float valorHora, costoProyecto;

    cout << "Ingrese cantidad horas: ";
    cin >> cantidadHoras;

    cout << "Ingrese tipo lenguaje: ";
    cin >> tipoLenguaje;

    cout << "Es urgente [1-> SI, 0-> NO]: ";
    cin >> esUrgente;

    /// DETERMINO VALOR HORA DADO TIPO DE LENGUAJE
    if(tipoLenguaje == 'C'){
        valorHora = 7500;
    }
    else if(tipoLenguaje == '#'){
        valorHora = 6100;
    }
    else if(tipoLenguaje == 'P'){
        valorHora = 5400;
    }
    else{
        valorHora = 5000;
    }

    /// DETERMINO COSTO DEL PROYECTO
    costoProyecto = cantidadHoras * valorHora;

    /// QUE SUCEDE SI ES URGENTE
    if(esUrgente == 1){
        costoProyecto = costoProyecto* 2.2;
    }

    cout << "El costo total es: " << costoProyecto << endl;

    return 0;
}
