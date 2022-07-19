#include <iostream>
using namespace std; 
/*  Escriba la función que recibe como parámetro 3 números reales de doble precisión 
y devuelve el promedio de estos números. Además, en un parámetro pasado por referencia 
devuelve la sumatoria de los mismos.*/

double promedio(double num1, double num2, double num3)
{
    double suma;
    double prom;
    suma=num1+num2+num3;
    prom=suma/3;
    return prom;
}

int main()
{
    double num1,num2,num3;
    cout<<endl<<"Ingrese primer numero decimal: ";
    cin>>num1;
    cout<<endl<<"Ingrese segundo numero decimal: ";
    cin>>num2;
    cout<<endl<<"Ingrese tercer numero decimal: ";
    cin>>num3;
    double suma=(num1+num2+num3); 
    double prom= promedio(num1,num2,num3);
    cout<<endl<<"El promedio entre los tres numeros decimales es: "<< prom;
    cout<<endl<<"La suma de los de los tres parametros es: "<< suma;
    return 0;
}