#include <iostream>

using namespace std;

/* 24. Diseñe la función que recibe como parámetro 2 enteros y los devuelve intercambiados.
Por ejemplo, si num1=45 y num2=50, luego de llamar a la función num1 sería igual a 50 y num2 igual a 45. */
void  Intercambio ( int r, int s)
{
  cout << s << " = " << r << endl;
  cout << r << " = " << s << endl;
}
int main()
{
    Intercambio ( 45 , 50 );
    return 0;
}