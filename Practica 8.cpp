#include "iostream"
using namespace std;
int main()
{
	//problema 1.4 registrar lo que se surte en una gasolinera en galones y conseguir su valor en litros y el costo de los litros surtidos
	float GALONES, TOTAL;
	const float GALON=3.785, PRECIOLITRO=8.20;
	
	cout<<" Escribe los galones surtios "<<"\n";
	cin>>GALONES;
	TOTAL=GALONES*GALON*PRECIOLITRO;
	cout<<" Hay que cobrar al cliente por "<<GALONES<<" galones "<<" debe pagar "<<TOTAL<<" pesos"<"\n";
	return 0;
	
}
