#include <iostream>
using namespace std;

/*16. Una función recibe como parámetro un entero que indica las filas de una figura. Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. Por ejemplo, si filas es 4 y el relleno es '+', la figura sería:

+

++

+++

++++ */

void Filas(string f, int nf)
{
  cout << "\n\nEjercicio 16:\n";
   for(int i = 1; i <= nf; ++i)
    {
        for(int a = 1; a <= i; ++j)
        {
            cout << f;
        }
        cout << "\n";
    }
}

int main()
{
    int nf;
    string f;
    Filas("+", 4);
    return 0;
}