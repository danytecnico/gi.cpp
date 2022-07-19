#include <iostream>

using namespace std;

int main ()
{
    cout<<endl<<"Ejemplo de bucle while";

    int cont = 10;
    int tabla = 5;
    cont++;
    do 
    {
        cout<<endl<<tabla << " X " << cont <<" = " <<(tabla * cont) ;
        cont --;
    } 
    while (cont>1);
    return 0;
}