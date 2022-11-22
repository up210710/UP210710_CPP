#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;



int main(){
	
	int numeros[] = { 19,16,17,18,20 };
	int i,j, aux;
	for(i= 0; i <5; i++){
		for(j= 0; j <5; j++){
			if(numeros[j] > numeros[j + 1]){
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		}
	}
	
	cout<<"Orden ascendente: "<<endl;
		
		for(i = 0; i <5; i++){
			cout<<numeros[i]<<" ";
		}
		
	
	getch();
	return 0;
}