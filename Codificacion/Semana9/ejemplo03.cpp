#include <iostream>
using namespace std;

int main()
{

    const int TAM = 10;

    /// int mi_vector[10];
    int mi_vector[TAM];

//    int mi_vector[TAM] = {6,5,7};

//    int indice = 3;
//    cout << mi_vector[indice];

//    cout << mi_vector[0]<< endl;
//    cout << mi_vector[1]<< endl;
//    cout << mi_vector[2]<< endl;
//    cout << mi_vector[3]<< endl;
//    cout << mi_vector[4]<< endl;
//    cout << mi_vector[5]<< endl;
//    cout << mi_vector[6]<< endl;
//    cout << mi_vector[7]<< endl;
//    cout << mi_vector[8]<< endl;
//    cout << mi_vector[9]<< endl;

    for (int i = 0; i < TAM; i++){
        cin >> mi_vector[i];
    }

    for (int i = 0; i < TAM; i++){
        cout << mi_vector[i] << endl;
    }
    return 0;

}
