#include "iostream"
#include "string"

using namespace std;

int main()
{
  //mensaje de bienvenida
  cout <<"hola! este programa 1.6 escribe los datos en orden inverso" << "\n";
  
  //se declararon los numeros que se sumarán (pueden ser decimales)
  int A,B,C,D;
  //se pide el primer numero
  cout << "por favor ingrese el primer valor A: " << "\n";
  //se asigna el primer valor a A
  cin >> A;
   //se pide el segundo numero
  cout << "por favor ingrese el segundo valor B: " << "\n";
  //se asigna el segundo valor de B
  cin >> B;
  //se pide el tercer numero
  cout << "por favor ingrese el tercer valor C: " << "\n";
  //se asigna el tercer valor de C
  cin >> C;
  //se pide el cuarto numero
  cout << "por favor ingrese el cuarto valor D: " << "\n";
  //se asigna el cuarto valor de D
  cin >> D;
  //se muestra el resultado.
  cout << D << " , " << C << " , " << B << " , " << A;
  return 0;
  }
