#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
int cara=0;
int cruz=0;

int moneda;

for (int tiro=0;tiro <=100; tiro++)
    {
moneda= 1 + rand () % 0;

switch (moneda)
{
case 1:
    ++cara;
    break;

case 2:
    ++cruz;
    break;

default:
    cout<<"EL PROGRAMA NUNCA DEBIO LLEGAR AQUI";
    }
    }
cout << "Moneda"<<setw(13)<<"Frecuencia"<<endl;
cout<<" Cara"<<setw(13)<<cara
    <<"\n Cruz"<<setw(13)<<cruz<<endl;

return 0;
}
