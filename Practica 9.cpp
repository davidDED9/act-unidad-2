#include "iostream"
using namespace std;
int main()
{
	//problema 1.5 encuentra el area y el volumen de un cilindro dada su altura y radio
	float RADIO, ALTURA, VOLUMEN, AREA;
	const float PI=3.141592;
	
	cout<<" Escribe la media del radio "<<"\n";
	cin>> RADIO;
	cout<<" Escribe la media de la altura "<<"\n";
	cin>> ALTURA;
	
	VOLUMEN=PI*(RADIO*RADIO)*ALTURA;
	AREA=2*PI*RADIO*ALTURA;
	
	cout<<" El volumen del cilindro es "<<VOLUMEN<<"\n";
	cout<<" El area del cilindro es "<<AREA<<"\n";
	return 0;
}
