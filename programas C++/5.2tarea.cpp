#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //a
    int cuenta, suma=0;

    cout<<"La suma de los enteros impares entre 1 y 99"<<endl;

    for (int cuenta=1; cuenta<=99; ++cuenta)
        {
                    if (cuenta%2 !=0)
                    {
                        suma=suma+cuenta;
                    }

        }
    cout<<"es  "<<suma<<endl;

return 0;
}
