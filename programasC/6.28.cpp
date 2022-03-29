#include <iostream>
using namespace std;

float ValorMinimo(double d,double f,double g)
{
    double minimo;

minimo =  d;

  if ( f < minimo )
 minimo =  f;

 if (  g < minimo )
 minimo =  g;

 return minimo;
}

int main()

{
double a, b, c;
cout << "Ingrese los tres numeros enteros a comparar... ";
cin >> a >> b >> c;
cout<< "El numero mas pequeno es: "<< ValorMinimo( a, b,  c) <<endl;
return 0;
}
