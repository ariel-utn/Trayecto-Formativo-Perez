#include <iostream>
using namespace std;

int main(){
    const int TAM = 50;
    ///int vec[TAM] = {-2,10,-7,12,22,35,48,-9,85,17};
    ///int vec[TAM] = {-2,10,-7,12};
    ///int vec[TAM] = {};

    /// DECLARACION DEL VECTOR
    int vec[TAM];

    /// PONER EN CERO EL VECTOR
    for(int i = 0; i < TAM; i++){
        vec[i] = 0;
    }

    /// MOSTRAR EL VECTOR
    for(int i = 0; i < TAM; i++){
        cout << vec[i] << "\t";
    }

    cout << endl << endl;

return 0;

}
