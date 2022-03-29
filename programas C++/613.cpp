 // Fig. 6.13: fig06_13.cpp
 // función cuadrado utilizada para demostrar la pila
 // de llamadas a funciones y los registros de activación.
 #include <iostream>
 using std::cin;
 using std::cout;
 using std::endl;

 int cuadrado( int ); // prototipo para la función cuadrado

 int main()
 {
 int a = 10; // valor para cuadrado (variable local automática en main)

 cout << a << " al cuadrado: " << cuadrado( a ) << endl; // muestra a al cuadrado
 return 0; // indica que terminó correctamente
 } // fin de main

 // devuelve el cuadrado de un entero
 int cuadrado( int x ) // x es una variable local
 {
 return x * x; // calcula el cuadrado y devuelve el resultado
 } // fin de la función cuadrado
