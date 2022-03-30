//Examen 3er parcial PAMELA WISTER CASTANEDA EJERCICIO 1

#include<iostream>
#include<iomanip>
using namespace std;

float calculaCargo(float t);

float calculaCargo(float t)
{
    if (t<=1)
        return 20;
        {
        if (t>1&&t<2)
        return (float) (5+20);
      if(t>1&&t<24)
      return (float) ((t-1)*5)+20;
        }
      return 100;
    }

int main()
{
    float t1,t2,t3;

    cout<<"Ingresa tiempos de los automoviles respectivamente: ";
    cin>>t1>>t2>>t3;
    cout<<"\n";

    cout<<"El pago del primero auto es de "<<calculaCargo(t1);
    cout<<"\n";
    cout<<"El pago del segundo auto es de "<<calculaCargo(t2);
    cout<<"\n";
    cout<<"El pago del tercer auto es de "<<calculaCargo(t3);
    cout<<"\n";

    return 0;
}

