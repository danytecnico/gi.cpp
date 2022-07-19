#include <iostream>
#include <math.h>
using namespace std;
/*
12. Diseñe la función que calcula la ecuación cuadrática, usando las fórmulas siguientes:

x1 = (-b+ raizCuadrada(b*b - 4*a*c))/(2*a)

x2 = (-b- raizCuadrada(b*b - 4*a*c))/(2*a)
*/

int funcionC(double a, double b, double c, double &x1, double &x2)
{
    if (a==0) //error division para 0
        return -1;
    double D;
    D=(b*b)-(4*a*c);
    if (D<0)//Error discriminante negativo
        return 0;


    x1 = (-b+sqrt((b*b) - 4*a*c))/(2*a);
    x2 = (-b-sqrt((b*b) - 4*a*c))/(2*a);
    return 1;
}

int main()
{
    double x1, x2;
    int r= funcionC(2.5, 4.6, 3.4, x1, x2);
    if (r==1)
        {
        cout<<endl<<"La primera solucion es: "<<x1;
        cout<<endl<<"La segunda solucion es: "<<x2;
        }
    else if(r==-1)
    cout<<endl<<"Error al dividir para 0";
    else if(r==0)
        cout<<endl<<"Discriminante negativo (Soluciones imaginarias)";
    return 0;
}