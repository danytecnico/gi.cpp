#include <iostream>

using namespace std;

int main ()
{
    cout<<"\n\nEjemplo de bucle while que impre la tabla del 10";

    int tabla = 10;
    int i = 1;
    while (i<=10)
    {
        cout<<"\n" << tabla << "X" << i << "=" << (tabla * i);
        i++;
    }
    // Se escribe por teclado un numero entero que debe estar entre 1 y 20
    // Este numero representa la tabla que el usuario desea genererar
    // SE PIDE GENERAR ESTA TABLA
    return 0;
    
}