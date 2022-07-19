#include <iostream>
using namespace std;

/*
7. Diseñe la función que determina la cantidad de cifras que tiene un número entero - 
este entero pasa como parámetro. Por ejemplo:
si el número es 12 tiene 2 cifras
si el número es 157 tiene 3 cifras
si el número es 999 tiene 3 cifras
si el número es 15000 tiene 5 cifras. 
si el número es -145 tiene 3 cifras
*/

void cantcifras(int a)
{
    if(a >=10 && a<=99 )
        cout<<endl<<"El número " << a << " tiene 2 cifras";
    else if (a >=100 && a<=999)
        cout<<endl<<"El número " << a << " tiene 3 cifras";
    else if (a >=1000 && a<=9999)
        cout<<endl<<"El número " << a << " tiene 4 cifras";
    else if (a >=10000 && a<=99999)
        cout<<endl<<"El número " << a << " tiene 5 cifras";
    else if (a >=100000 && a<=999999)
        cout<<endl<<"El número " << a << " tiene 6 cifras";
    else 
        cout<<endl<<"El número " << a << " tiene 1 cifras";
}

int main ()
{
    cantcifras(1);
    cantcifras(43);
    cantcifras(500);
    cantcifras(1230);
    cantcifras(67032);
    cantcifras(234578);

    return 0;
}