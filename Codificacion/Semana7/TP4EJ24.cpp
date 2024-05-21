#include <iostream>
using namespace std;

int main()
{
    int legajo, materia;
    float nota;

    /// NIVEL LOTE

    /// PTO A
    float promedio;
    int contNotas = 0;
    float acuNotas = 0;

    /// PTO B
    float minNota = 11;
    int minLegajo;

    /// PTO C
    int contNotasMateria = 0;

    /// PTO D
    int contAprobados = 0, contNoAprobados = 0, total;
    float porcAprobados, porcNoAprobados;

    cout << "Legajo: ";
    cin >> legajo;

    while (legajo <= 30000)
    {
        cout << "materia: ";
        cin >> materia;

        cout << "Nota: ";
        cin >> nota;

        cout << "---------" << endl;
        cout << endl;

        /// NIVEL REGISTRO

        /// PTO A
        acuNotas += nota;
        contNotas++;

        /// PTO B
        if(nota < minNota)
        {
            minNota = nota;
            minLegajo = legajo;
        }

        /// PTO C
        if(materia==10)
        {
            contNotasMateria++;
        }

        /// PTO D
        if(nota < 6)
        {
            contNoAprobados++;
        }
        else
        {
            contAprobados++;
        }

        //
        cout << "Legajo: ";
        cin >> legajo;
    }

    /// NIVEL LOTE

    cout << endl;
    cout << endl;

    /// PTO A
    if(contNotas==0)
    {
        cout << "PTO A) No se puede calcular el promedio" << endl;
        cout << "PTO B) No se puede calcular la nota minima" << endl;
    }
    else
    {
        promedio = acuNotas/contNotas;
        cout << "PTO A) El promedio de notas es: " << promedio << endl;
        cout << "PTO B) El legajo con la nota minima es: " << minLegajo << endl;
    }

    /// PTO C
    cout << "PTO C) La cantidad de examenes de la materia 10 es: " << contNotasMateria << endl;

    /// PTO D
    total = contAprobados+contNoAprobados;
    if(total==0)
    {
        cout << "PTO D) No se puede calcular los porcentajes" << endl;
    }
    else
    {
        porcAprobados = (float)(contAprobados*100)/total;
        porcNoAprobados = (float) (contNoAprobados*100)/total;
        cout << "PTO D) Porcentaje de aprobados: " << porcAprobados << endl;
        cout << "PTO D) Porcentaje de NO aprobados: " << porcNoAprobados << endl;
    }


    return 0;

}
