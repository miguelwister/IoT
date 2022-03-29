 #include <iostream>
 using std::cout;
 using std::endl;
 #include <iomanip>
 using std::setw;
 #include <cstdlib> // contiene el prototipo de la función rand
 using std::rand;

 int main()
 {
int cara1 = 0; // cuenta de veces que se tiró cara
int cruz2 = 0; // cuenta de veces que se tiró cruz

int cara; // almacena el valor que se tiró más recientemente
for ( int tiro = 1; tiro <= 100; tiro++ )
{
   cara = 1 + rand() % 2;
   switch ( cara )
   {
       case 1:
          ++cara1; // incrementa el contador de 1s
          break;
       case 2:
          ++cruz2; // incrementa el contador de 2s
          break;
       default: // valor inválido
          cout << "El programa nunca debio llegar aqui!";
   }
}
cout << "Moneda" << setw( 13 ) << "Frecuencia" << endl;
cout << "   Cara" << setw( 13 ) << cara1
    <<"\n Cruz" << setw( 13 ) << cruz2<<endl;


return 0;

}
