#include <iostream>
using namespace std;

int main()
{

    int num, max1, max2;
    int contNum = 0;

    cout << "Ingrese #: ";
    cin >> num;

    while (num != 0)
    {
        contNum++;
        if(contNum == 1)
        {
            max2 = num;
            max1 = num;
        }
        else if(num > max1)
        {
            max2 = max1;
            max1 = num;
        }
        else if ( (num > max2) || contNum== 2)
        {
            max2 = num;

        }

        cout << "Ingrese #: ";
        cin >> num;
    }

    cout << "Maximo 1: " << max1 << endl;
    cout << "Maximo 2: " << max2 << endl;


    return 0;

}
