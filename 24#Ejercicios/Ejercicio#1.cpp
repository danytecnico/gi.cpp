#include <iostream>
using namespace std; 
/* Escriba la función que recibe como parámetro 3 números reales de doble precisión y devuelve 
el promedio de estos números.*/

double promedio(double n1, double n2, double n3)
{
    double suma;
    double prom;

    suma=n1+n2+n3;
    prom=suma/3; 
    return prom;
}

int main()
{
    double n1,n2,n3;
    cout<<endl<<"Ingrese primer numero decimal: ";
    cin>>n1;
    cout<<endl<<"Ingrese segundo numero decimal: ";
    cin>>n2;
    cout<<endl<<"Ingrese tercer numero decimal: ";
    cin>>n3;
    double prom= promedio(n1,n2,n3);
    cout<<endl<<"El promedio entre los tres numeros decimales es: "<< prom;
    return 0;
}