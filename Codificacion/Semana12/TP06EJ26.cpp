#include <iostream>

using namespace std;

int main()
{
    int nroArticulo, nroSucursal, cantidadVendida;
    float precioUnitario;
    float vPrecioUnitario[25];

    /// PTO A
    int vCantPorArticulo[25] {};

    /// PTO B
    float recTotal = 0;
    //float precio;

    /// PTO C
    float vCantPorSucursal[5] {};

    /// LOTE DE CARGA

    for(int i = 1; i <= 25; i++)
    {
        cout << "Ingrese numero articulo: ";
        cin >> nroArticulo;

        cout << "Ingrese precio: ";
        cin >> vPrecioUnitario[nroArticulo-1];
    }

    /// LOTE DE REGISTROS/VENTAS

    cout << "Ingrese numero articulo: ";
    cin >> nroArticulo;

    while (nroArticulo != 0)
    {
        cout << "Ingrese numero sucursal: ";
        cin >> nroSucursal;

        cout << "Ingrese cantidad vendida: ";
        cin >> cantidadVendida;

        /// PROCESO TODAS LAS VENTAS

        /// PTO A
        vCantPorArticulo[nroArticulo-1]+=cantidadVendida;

        /// PTO B
        //precio = vPrecioUnitario[nroArticulo-1];
        recTotal += vPrecioUnitario[nroArticulo-1] * cantidadVendida;

        /// PTO C
        vCantPorSucursal[nroSucursal-1] += cantidadVendida;

        cout << "Ingrese numero articulo: ";
        cin >> nroArticulo;
    }

    /// PTO A
    system("cls");
    cout << "-----PTO A-----" << endl;
    cout << "Art.\tCant." << endl;
    for (int x = 0; x < 25; x++)
    {
        cout << x + 1 << "\t" << vCantPorArticulo[x] << endl;
    }

    /// PTO B
    /*for(int y = 0; y < 25; y++)
    {
        recTotal += vPrecioUnitario[y] * vCantPorArticulo[y];
    }*/

    cout << endl << endl;
    cout << "-----PTO B-----" << endl;
    cout << "Total recaudado $: " <<  recTotal << endl;

    cout << endl << endl;
    /// PTO C

    /*
    int maximo = 0;

    for (int r = 1; r < 5; r++)
    {
        if(vCantPorSucursal[r]>vCantPorSucursal[maximo]){
            maximo = r;
        }
    }
    */
    /*
    int maximaSucursal = 1;
    int maximaCantidad = vCantPorSucursal[0];

    for( int r = 1; r < 5; r++){
        if (vCantPorSucursal[r]>maximaCantidad){
            maximaCantidad= vCantPorSucursal[r];
            maximaSucursal = r + 1;
        }
    }
    */

    /*
    int maximaSucursal, maximaCantidad;
    for (int r = 0; r < 5; r++)
    {
        if(r==0)
        {
            maximaSucursal = r + 1;
            maximaCantidad = vCantPorSucursal[r];
        }
        else
        {
            if(vCantPorSucursal[r]> maximaCantidad)
            {
                maximaSucursal = r + 1;
                maximaCantidad = vCantPorSucursal[r];
            }
        }
    }
    */
    int maximaSucursal, maximaCantidad;
    for (int r = 0; r < 5; r++)
    {
        if(r==0 || vCantPorSucursal[r] > maximaCantidad)
        {
            maximaSucursal = r + 1;
            maximaCantidad = vCantPorSucursal[r];
        }
    }

    cout << "-----PTO C-----" << endl;
    cout << "La sucursal con mayor cant. art. vendidos: " << maximaSucursal << " con: " << maximaCantidad << " unidades" << endl;
    return 0;
}
