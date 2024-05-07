#include <iostream>
#include <locale>
using namespace std;

int main(){

    setlocale(LC_ALL,"");

    int numeroDia, i;
    float temperatura, milimetrosLluvia, visivilidad;

    /// PTO A
    float maxTemperatura;
    int maxTemperaturaDia;

    /// PTO B
    float minTemperatura;
    float amplitudTermica;

    /// PTO C
    int contNeblina = 0;

    /// PTO D
    int contDiasConLluvia = 0;
    int contDiasSinLluvia = 0;


    for(i = 1; i <= 15; i++){
        cout << "Ingrese numero de dia: ";
        cin >> numeroDia;

        cout << "Ingrese temperatura: ";
        cin >> temperatura;

        cout << "Ingrese milimetros de lluvia: ";
        cin >> milimetrosLluvia;

        cout << "Ingrese visivilidad: ";
        cin >> visivilidad;

        /// PTO A y B
        if( (i == 1) || (temperatura > maxTemperatura) ){
            maxTemperatura = temperatura;
            maxTemperaturaDia = numeroDia;
        }

        /// PTO B
        if( (i==1) || (temperatura < minTemperatura) ){
            minTemperatura = temperatura;
        }

        /// PTO C
        if(visivilidad < 2){
            contNeblina++;
        }

        /// PTO D
        if(milimetrosLluvia > 0){
            contDiasConLluvia++;
        }
        else{
            contDiasSinLluvia++;
        }
    }

    //system("cls");

    cout << endl;
    cout << "PTO A)" << endl;
    cout << "El día: " << maxTemperaturaDia << " tuvo la temperatura máxima con: " << maxTemperatura << "°C" << endl;

    cout << endl;
    amplitudTermica = maxTemperatura - minTemperatura;
    cout << "PTO B)" << endl;
    cout << "La amplitud térmica fue de: " << amplitudTermica << "°C" << endl;

    cout << endl;
    cout << "PTO C)" << endl;
    cout << "Hubo " << contNeblina << " día/s de neblina" << endl;

    cout << endl;
    cout << "PTO D)" << endl;
    if(contDiasConLluvia > contDiasSinLluvia){
        cout << "Quincena lluviosa" << endl;
    }
    else if( contDiasConLluvia >= (15/3)){
        cout << "Quincena humeda" << endl;
    }
    else{
        cout << "Quincena seca" << endl;
    }




return 0;

}
