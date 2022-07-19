#include <iostream>

using namespace std;

int main ()
{
    cout<<"\n\nEjemplo de bucle while que impre la tabla del 9";

    int tabla = 9;
    int i = 1;
    while (i<=10)
    {
        cout<<"\n" << tabla << "X" << i << "=" << (tabla * i);
        i++;
    }
    // Se escribe por teclado un numero entero que debe estar entre 1 y 20
    // Este numero representa la tabla que el usuario desea genererar
    // SE PIDE GENERAR ESTA TABLA
    
    int num;
    cout<<endl<<endl<<"Ingrese la tabla que desea generar";
    cin>>num; 
    if (!(num>= 1 && num<= 20))
    {
        cout<<endl<<"Rango no valido...";
        return 0; // Abandonar la ejecucuion del progrma
    }
    else
{
    i = 1;
    while (i<=12)
    {
        cout<<"\n" << num << " X "<< i << "=" <<(num * i);
        i++;
    }
}   

    return 0;
    
}
