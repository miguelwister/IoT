//Examen 3er parcial PAMELA WISTER CASTANEDA EJERCICIO 1
<<<<<<< HEAD
// 29 marzo 2022 20.12
=======
// 29 marzo 2022 19:38
>>>>>>> d55ce380f65e2c1abfd785c7612a9761ac7a8689


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
    cout<<"HOLA - Bienvenido estacionamiento PAJARITOS -";
    cout<<"\n";
    cout<<"Ingresa tiempos de los automoviles respectivamente: ";
    cin>>t1>>t2>>t3;
    cout<<"\n";
    cout<<"\n";
    cout<<"El pago del primero auto es de "<<calculaCargo(t1);
    cout<<"\n";
    cout<<"El pago del segundo auto es de "<<calculaCargo(t2);
    cout<<"\n";
    cout<<"El pago del tercer auto es de "<<calculaCargo(t3);
    cout<<"\n";

    return 0;
}

