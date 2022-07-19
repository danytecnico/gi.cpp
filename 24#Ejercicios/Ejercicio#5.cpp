#include <iostream>
#include <math.h>
using namespace std;

/*5. Escriba la función que recibe como parámetro 
1 entero y devuelve el cubo del mismo.*/

void Cubo(double nu1){
    double elevado = pow( nu1, 3);
    cout << "El numero " << nu1 << " elevado al cubo es " << elevado << endl;
}

int main(int argc, char const *argv[])
{
    Cubo(6);
    Cubo(9);
    return 0;
}

