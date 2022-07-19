#include <iostream>
using namespace std;
/*Escriba la función que recibe como parámetro 1 entero positivo e imprime su equivalente en binario.*/
#include <iostream>
using namespace std;

void binario( int num)
{
    short binario[9];
    for (int b = 0; b <=9 ; b++)
    {
        binario[b] = num % 2;
        num /=2;
    }
    cout<<endl<<"El numero binario es: ";
    for ( int b = 8; b >=0; b--)
    {
        cout<<binario[b];
    }
}

int main()
{
    int num;
    
    binario(500);
    return 0;
}