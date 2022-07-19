#include <iostream>

using namespace std;

int main()
{
int edad;  
cout<<"Ingresa tu edad";
cin>>edad;

cout<<"Tu edad es : "<<edad;
if (edad >= 18)
{
    cout<<" Eres mayor de edad. Ya puedes votar";
}
else
{
    cout<<" Eres manor de edad. No puede votar";
}
return 0;

}