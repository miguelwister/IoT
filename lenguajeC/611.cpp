#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x=0,y=0,z=0;
    cout<<"Ingrese el valor de x: "<<endl;
    cin>> y;
    x=fabs(y);
    cout<<"el valor de la funcion fabs de: "<<setw(4)<<y<<setw(5)<<" es= \t"<< x<<endl;
    cout<<"ingrese el valor de la variable a la que se le aplicaran las siguientes funciones: "<<endl;
    cin>>z;
    x=floor(z);
    cout<<"\n";
    cout<<"el valor de la funcion floor de: "<<setw(4)<<z<<setw(4)<<" es= \t"<<x<<endl;
    cout<<"\n";
    x=ceil(z);
    cout<<"el valor de la funcion ceil de: "<<setw(4)<<z<<setw(4)<<" es= \t"<<x<<endl;
    cout<<"\n";

    return 0;
}
