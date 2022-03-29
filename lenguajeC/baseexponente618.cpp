#include <iostream>
#include <iomanip>
using namespace std;

int enteroPotencia (int a, int b)
{
    int c=1;

for (int i=1; i<=b; i++)
    {
       c=c*a;
    }

    return c;
}

int main()
{
    int base, exponente;
    cout<< "Escribe la base y el exponente deseado... ";
    cin>> base>> exponente;
    cout<<"El resultado de elevar la base con ese exponente es de... "<<enteroPotencia(base,exponente);
    cout<<"\n";
return 0;
}
