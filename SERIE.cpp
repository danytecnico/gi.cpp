#include <iostream>
using namespace std;

/*
2!/5 + 3!/5^2 + 4!/5^3 + 5!/5^4  + N!/5^5
*/

double factorial(int num)
{
    double fac= 1;
    for (int j=1; j<=num; j++)
    {
        fac=fac*j;
    }
    return fac;
}

int potencia(int base, int exponente)
{
    int resultado=1;
    for (int k=1; k<=exponente; k++)
        resultado=resultado*base;
        return resultado;
}

double seriefactorialFracc(int N)
{   
    double suma = 0;
    for (int i=2; i<=N; i++)
    {
        suma=suma +(factorial(i)/potencia(5, i-1));
    }
    return suma;
}

int main ()
{
    cout<<endl<<seriefactorialFracc(6);
    return 0;
}