#include <iostream>
using namespace std;

/*13. Diseñe la función que devuelve el resultado de la siguiente serie:

1 - 2 + 3 - 4 + 5 - 6 + 7 - N

N es un parámetro que indica el límite de la serie */

void sumatoria(int n)
{
	int resultado;
	for(int f=1; f<=n; f++)
    {
	if(f % 2==0)
    {
		resultado= resultado- f;
		
	}
	else 
    {
		resultado= resultado +f;
	}
}
cout<<resultado; 
}

int main()
{
    sumatoria(8);
    return 0;
}