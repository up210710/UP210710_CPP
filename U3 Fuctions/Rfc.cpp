#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

void RFC(char nombre[], char apellido_paterno[], char apellido_materno[],char fecha[], int);

int main(){
	const int TAM = 30;
	char nombre[TAM], apellido_paterno[TAM], apellido_materno[TAM], fecha[TAM];
	
	
	
	cout<<"Ingrese un nombre: ";
	cin.getline(nombre,TAM,'\n');
	cout<<"Ingrese su apellido paterno: ";
	cin.getline(apellido_paterno,TAM,'\n');
	cout<<"Ingrese su apellido materno: ";
	cin.getline(apellido_materno,TAM,'\n');
	cout<<"Ingrese su fecha de nacimiento aaaa/mm/dd: ";
	cin.getline(fecha,TAM,'\n');
	
	RFC(nombre,apellido_paterno,apellido_materno,fecha,TAM);
	
	
	getch();
	return 0;
}

void RFC(char nombre[], char apellido_paterno[], char apellido_materno[],char fecha[],int TAM){
	
	char RFC[20];
	
	bool vocal = false;
	int tam, tamy, c = 0;
	strupr(nombre);
	strupr(apellido_paterno);
	strupr(apellido_materno);
	tam = strlen(nombre);
	RFC[0] = apellido_paterno[0];
		for(int i = 1; i <= tam; i++){
		
		if(vocal == false){
		switch(apellido_paterno[i]){
			case 'A' : RFC[1] = apellido_paterno[i] ; vocal = true;break;
			case 'E' : RFC[1] = apellido_paterno[i] ; vocal = true;break;
			case 'I' : RFC[1] = apellido_paterno[i] ; vocal = true;break;
			case 'O' : RFC[1] = apellido_paterno[i] ; vocal = true;break;
			case 'U' : RFC[1] = apellido_paterno[i] ; vocal = true;break;
		}
		}
	}
	
	RFC[2] = apellido_materno[0];
	RFC[3] = nombre[0];
	
	tamy = strlen(fecha);

	for(int i=0;i<10;i++){
		if(fecha[i] != '/'){
			RFC[4+c] = fecha[i];
			c++;
		}
	}

	cout<<endl<<RFC;
	
}