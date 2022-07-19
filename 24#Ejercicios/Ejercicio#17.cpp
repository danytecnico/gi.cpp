#include <iostream>
using namespace std;

/*
17. Figura en espejo: Una función recibe como parámetro un entero que indica las filas de una figura. 
Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
Por ejemplo, si filas es 4 y el relleno es 'o', la figura sería:
o
oo
ooo
oooo
ooo
oo
o
*/

void filas(int f)
{
    for (int i=0; i<f; i++)
    {
        for(int j=0; j<=i; j++ )
        {
            cout << "o";
        }
        cout<<endl;
    }
    for (int i=f-1; i>0; i--)
    {
        for(int j=0; j<i; j++ )
        {
            cout << "o";
        }
        cout << endl;
    }
}

int main ()
{
    cout << "\n";
    int f = 5;
    filas(f);
    return 0;
}