#include <iostream>

using namespace std;

/// PROTOTIPO/DECLARACION

void Punto2(bool vec[]);
void Punto3(int vec[], string nombres[]);


int main(){
    int idVenta;
    int idAutor;                /// TENGO 500 AUTORES (1000-1499)
    int idGenero;               /// TENGO 7 GENEROS (1-7)
    int precio;
    int paginas;
    int idSucursal;             /// TENGO 4 SUCURSALES (1-4)

    /// PTO A
    bool vSucursales[4] {};     /// FALSE SIGNIFICA QUE NO TUVO VENTAS

    /// PTO B
    bool vAutor[500] {};        /// FALSE SIGNIFICA QUE NO TUVO VENTAS

    /// PTO C
    int vGeneros[7] {};         /// PONER EN 0 PORQUE ACULUMARE EL PRECIO
    string vNombres[7] = {"Terror","Biografia","Novela","Ciencia ficcion","Historia","Ciencia","Salud"};

    /// PTO D
    int vRecaudacion[500] {};   /// PONER EN 0 PORQUE ACULUMARE EL PRECIO


    cout << "Ingrese Id venta: ";
    cin >> idVenta;

    while (idVenta != 0){

        cout << "Ingrese Id autor: ";
        cin >> idAutor;

        cout << "Ingrese Id Genero: ";
        cin >> idGenero;

        cout << "Ingrese precio: ";
        cin >> precio;

        cout << "Ingrese paginas: ";
        cin >> paginas;

        cout << "Ingrese Id Sucursal: ";
        cin >> idSucursal;

        cout << endl << endl;

        /// PROCESAMIENTO DE VENTAS

        /// PTO A
        if(idGenero==1){
            vSucursales[idSucursal-1]=true;
        }

        /// PTO B
        if(paginas > 1200){
            vAutor[idAutor-1000]=true;
        }

        /// PTO C
        vGeneros[idGenero-1]+=precio;

        /// PTO D
        vRecaudacion[idAutor-1000]+=precio;


        cout << "Ingrese Id Venta: ";
        cin >> idVenta;
    }

    cout << endl << endl;
    cout << "PTO A" << endl;
    for(int i = 0; i < 4; i++){
        if(vSucursales[i]==false){
            cout << "La sucursal "<< i+1 << " no vendio genero de terror" << endl;
        }
    }

    cout << endl << endl;
    cout << "PTO B" << endl;
    Punto2(vAutor);

    cout << endl << endl;
    cout << "PTO C" << endl;
    Punto3(vGeneros, vNombres);

    cout << endl << endl;
    cout << "PTO D" << endl;
    int maxRecaudacion = 0;
    int maxAutor;
    for(int i = 0; i < 500; i++){
        if(vRecaudacion[i]>maxRecaudacion){
            maxRecaudacion = vRecaudacion[i];
            maxAutor= i+1000;
        }
    }
    cout << "El autor de mayor recaudacion: " << maxAutor << endl;

    return 0;
}

/// IMPLEMENTACION/DEFINICION
void Punto2(bool vec[]){
    int cont=0;
    for(int i = 0; i < 500; i ++){
        if(vec[i]==true){
            cont++;
        }
    }
    cout << "Total de Autores " << cont << endl;
}

void Punto3(int vec[], string nombres[]){
    for(int i = 0; i < 7; i++){
        cout << nombres[i] << " $: " << vec[i] << endl;
    }
}
