/*
    Unidad 1. Tipos de datos
    Autor: Juan Manuel Rios Estrada
    Fecha: 15/09/2022
    Descripcion: Muestra los diferentes tipos de datos en c++
    */

//Libreria para manejo de entradas y salida de pantalla
#include<iostream>
//Libreria para el uso de printf y scanf
#include<stdio.h>

//uso del manejo para evitar el std
using namespace std;
//funcion principal del tipo entero 
int main(){
    //mas informacion en:
    //*********************
    int entero=2147483647;
    float flotante=3.4e38;
    double grande=2.565465654654;
    char caracter='@';

    cout<<"Este programa muetra los tipos de datos. \n";
    cout<<"El numero entero es: "<<entero<<endl;
    cout<<"El tamaño del entero es: "<<sizeof(entero)<<"Bytes"<<endl;
    cout<<"El numero flotante es: "<<flotante<<endl;
    getchar();
    return 0;
}
