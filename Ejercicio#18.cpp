#include <iostream>
using namespace std;

/* 18. Una función recibe 3 números enteros. La función devuelve verdadero si 
uno de esos números es la suma de los otros dos. */
void verdadero(int n1,int n2,int n3)
{
    if (n1 + n2 == n3)
    {
        cout<< "Verdadero";
    }

    else if (n1 + n3 == n2)
    {
        cout<< "Verdadero";
    }

    else if (n2 + n3 == n1)
    {
        cout<< "Verdadero";
    }

    else
    {
        cout<< "Falso";
    }
}

int main ()
{
    int n1,n2,n3;
    verdadero(n1,n2,n3);
    return 0;
}