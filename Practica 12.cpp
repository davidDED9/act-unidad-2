#include "iostream"
#include "math.h"
using namespace std;
int main()
{
	
	//Problema 1.8 calcula la distancia de dos puntos dados x1,x2,y1 y y2	
	float X1,Y1,X2,Y2,DIS;
	
	cout<<" Escribe la coordenada x del primer punto "<<"\n";
	cin>>X1;
	cout<<" Escribe la coordenada Y del primer punto "<<"\n";
	cin>>Y1;
	cout<<" Escribe la coordenada X del segundo punto "<<"\n";
	cin>>X2;
	cout<<" Escribe la coordenada Y del segundo punto "<<"\n";
	cin>>Y2;
	
	DIS=sqrt(pow((X1-X2),2)+pow((Y1-Y2),2));
	
	cout<<" La distancia entre el punto "<<X1<<","<<Y1<<" y el punto "<<X2<<","<<Y2<<" es "<<DIS<<"\n";
	return 0;
	}
