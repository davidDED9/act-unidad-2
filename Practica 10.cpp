#include "iostream"
using namespace std;
int main()
//problema 1.6 determina la cantidad de segundos que hay en determinados dias
{
int DIAS;
float SEG;

cout<<" Escribde el numero de dias para calcular los segundos "<<"\n";
cin>>DIAS;

SEG=DIAS*24*60*60;

cout<<" En "<<DIAS<<" dias, hay "<<SEG<< " segundos "<<"\n";
return 0;
}
