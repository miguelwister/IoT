#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int p, suma;
cout<<"Indica cuantos numeros se van a sumar ";
cin>>p;

for(suma;++suma; suma<=10)
    suma=suma+p;
cout<<"La suma de los enteros elegidos es= "<<suma<<endl;

return 0;
}
