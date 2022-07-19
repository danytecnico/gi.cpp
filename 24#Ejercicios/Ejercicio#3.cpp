#include <iostream>
using namespace std;
/*Escriba la función que determina si un número pasado como parámetro es par o impar.*/

int parimpar(int nu1)
{
    cout<<"Ingrese numero: "<< endl;
    cin>>nu1;
    if (nu1 % 2 == 0)
    cout<<"El numero: " << nu1 << " es par"<< endl;
    else
    cout<<"El numero: " << nu1 << " es impar"<< endl;
    return nu1;
}

int main()
{
    int nu1;
    parimpar(nu1);
    return 0;
}