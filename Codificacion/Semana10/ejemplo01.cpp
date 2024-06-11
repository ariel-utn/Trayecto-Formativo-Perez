#include <iostream>
using namespace std;

int main(){
    char nombre[6] = {'a','r','i','e','l','\n'};

    int i = 0;
    while(nombre[i] != '\n'){
        cout << nombre[i];
        i++;
    }

return 0;

}
