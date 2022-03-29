#include <iostream>
#include <math.h>

using namespace std;

 inline float AreaCirculo(double t)
 {
double area;
area=M_PI*(t*t);
return area;
 }

int main()
{
    int r;
cout<<"Ingresa el radio del circulo... ";
cin>>r;
cout<<"El area del circulo es igual a... "<< AreaCirculo(r)<<endl;
    return 0;
}

