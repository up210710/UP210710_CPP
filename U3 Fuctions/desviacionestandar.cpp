#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;


void desv(float );

int main(){
	float n;
	cout<<"Ingrese su numero de datos: ";cin>>n;
	
	desv(n);
	
	getch();
	return 0;
}

void desv(float n){
	
	float va = 0, prom = 0, suma = 0, s = 0, dv = 0;
	
	
	float datos[100];
	
	for(int i = 0; i < n; i++){
		
		cout<<"Ingrese sus datos: ";cin>>datos[i];
        cout<<endl;
	}


	for (int i = 0; i < n; i++)
	{
		s = s + datos[i];
	}
	
	prom = s/n;
	for (int i = 0; i < n; i++)
	{
		 suma = suma + (pow((datos[i] - prom),2));
		 
	}
	
	
	va = suma/(n-1);
	dv = sqrt(va);
	
	
	cout<<"\nDesviación estándar muestra: "<<dv;
	va = suma/(n);
	dv = sqrt(va);
	cout<<"\nDesviación estándar poblacional: "<<dv;
}