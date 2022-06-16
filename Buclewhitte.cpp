#include <iostream>

using namespace std;

int main ()
{
    cout<<"Ejemplo de bucle while";

    int i = 0;
    while (1 < 10)
    {
        i++;
        cout<<endl<<"Mensaje a :"<< i;
        cout<<endl<<"El cuadrado de i: "<<(i * i);
    }
    return 0;

}