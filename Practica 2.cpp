#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
int A,B;
float RES;
//mensaje de bienvenido.
cout <<"hola! este programa 1.7 escribir el resultado de la expresión";
//se detectaron los numeros que se sumaron (pueden ser decimales).
//se pide el primer numero.
cout <<"por favor ingrese el valor de a: "<< "\n";
cin>> A;
//se pide el segundo numero.
cout <<"por favor ingrese el valor b: " << "\n";
cin>> B;
RES=((A+B)*(A+B))/3.0;
//se muestra el resultado.
printf ("\n el resultado de la expresion es %5.4f \n", RES);
cout << "el resultado de la expresion es " << RES << "\n";
return 0;
}
