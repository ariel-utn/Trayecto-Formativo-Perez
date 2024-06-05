#include <iostream>
using namespace std;

int main()
{
    int numeroArticulo, numeroArticuloAnterior, diaVenta, cantidadVendida;
    float importeVenta;

    cout << "Numero articulo: ";
    cin >> numeroArticulo;

    /// PTO A
    int totalUnidadesVendidas, maximaCantidadNumeroArticulo;
    int maximaCantidadUnidadesVendidas = 0;

    /// PTO B
    float recaudacionTotalPorArticulo;

    /// PTO C
    int q1 = 0;
    int q2 = 0;

    /// PTO D
    int maximaCantidadIndividual = 0;
    int maximoArticuloIndividual;
    int maximoDiaIndividual;

    /// NIVEL 1 -> LOTE

    while (numeroArticulo != 0)
    {
        /// NIVEL 2 -> GRUPO

        /// PTO A
        totalUnidadesVendidas = 0;

        /// PTO B
        recaudacionTotalPorArticulo = 0;

        numeroArticuloAnterior= numeroArticulo;

        while (numeroArticulo == numeroArticuloAnterior)
        {
            cout << "Dia venta: ";
            cin >> diaVenta;

            cout << "Cantidad vendida: ";
            cin >> cantidadVendida;

            cout << "Importe venta: ";
            cin >> importeVenta;

            cout << endl;

            /// NIVEL 3 -> REGISTRO

            /// PTO A
            if(diaVenta < 16)
            {
                totalUnidadesVendidas+=cantidadVendida;
            }

            /// PTO B
            recaudacionTotalPorArticulo += importeVenta;

            /// PTO C
            if (diaVenta > 15){
                q2 += cantidadVendida;
            }
            else{
                q1 += cantidadVendida;
            }

            /// PTO D
            if (cantidadVendida > maximaCantidadIndividual){
                maximaCantidadIndividual = cantidadVendida;
                maximoArticuloIndividual = numeroArticulo;
                maximoDiaIndividual = diaVenta;
            }

            cout << "Numero articulo: ";
            cin >> numeroArticulo;

        }

        cout << endl;
        /// NIVEL 2 -> GRUPO

        cout << "***************************************" << endl;
        cout << "INFO ARTICULO #: " << numeroArticuloAnterior << endl;

        /// PTO A

        if(totalUnidadesVendidas > maximaCantidadUnidadesVendidas)
        {
            maximaCantidadUnidadesVendidas = totalUnidadesVendidas;
            maximaCantidadNumeroArticulo = numeroArticuloAnterior;
        }

        /// PTO B

        cout << "Recaudo $: " << recaudacionTotalPorArticulo << endl;
    }

    /// NIVEL 1 -> LOTE
    cout << endl;
    /// PTO A
    cout << "El articulo con mayor cantidad total unidades vendidas fue: " << maximaCantidadNumeroArticulo << endl;

    cout << endl;
    /// PTO C
    if(q1 > q2){
        cout << "La quincena 1 vendio la mayor cantidad de unidades totales" << endl;
    }
    else{
        cout << "La quincena 2 vendio la mayor cantidad de unidades totales" << endl;
    }
    cout << endl;
    /// PTO D
    cout << "El articulo con maxima venta individual: " << maximoArticuloIndividual << " en el dia: " << maximoDiaIndividual << " con: " << maximaCantidadIndividual << " unidades" << endl;

    return 0;

}
