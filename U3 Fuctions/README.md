# Unit 3 programs

## Functions 

<div align="center">
<img alt="Functions" src='Imagenes/c.gif' width='400'>
</div>

* [E01_Funcionbiseciones.cpp](https://github.com/up210710/UP210710_CPP/blob/main/U3%20Fuctions/E01_Funcionbiseciones.cpp)
* Objetiv
### It must be based on an established margin of error.
```
#include <iostream>
#include <cmath>
using namespace std;

double funcionEc1(double x) // x^2-8x+15
{
    return (pow(x, 2) - 8 * x + 15);
}
int main()
{
    double x1 = 4;
    double x2 = 7;
    double xNueva;
    double Es = .001;         // Error Estandar o Error Absoluto
    double Er = abs(x2 - x1); // Errror Relativo
    int i = 1;
    while (Er > Es)
    {
        xNueva = (x1 + x2) / 2;
        if (funcionEc1(x1) * funcionEc1(xNueva) < 0)
        {
            x2 = xNueva;
        }
        else
        {
            x1 = xNueva;
        }
        Er = abs(x2 - x1);
        i = i + 1;
    }
    cout << "i= " << i << " raiz= " << xNueva << endl;
    cout << "Hecho mi pana rabbit..........." << endl;
    return 0;
}
```
<div align="center">
<img alt="Ejecuccion" src='Imagenes/Bi.png' width='400'>
</div>

* [02_tramo.cpp](https://github.com/up210710/UP210710_CPP/blob/main/U2%20Control%20Structures%20and%20Cycles/02_tramo.cpp)
* Objetiv
### El objetivo de este programa es que se impriman el resultado de la renta con su respectivo impuesto de mismo pais con los diferentes tipos de impuestos de la ejecuccion de la misma ventana.
```

```
<div align="center">
<img alt="Ejecuccion" src='Imagenes/abccorrida.png' width='400'>
</div>

* [03_Tablas.cpp](https://github.com/up210710/UP210710_CPP/blob/main/U2%20Control%20Structures%20and%20Cycles/03_Tablas.cpp)
* Objetiv
### El objetivo de este programa es que se impriman el resultado de la variable llamada N que es el numero principal que hace que funcione todo pero el objetivo es ejecutar o imprimir las tablas de multiplicar del mismo numero dado asi como en orden descendente y normal con los diferentes ciclos(Opcional cualquier tipo de ciclo) de la ejecuccion de la misma ventana.
```

```
<div align="center">
<img alt="Ejecuccion" src='Imagenes/Tablascorrida.png' width='400'>
</div>

* [06_Puntos.cpp](https://github.com/up210710/UP210710_CPP/blob/main/U2%20Control%20Structures%20and%20Cycles/06_Puntos.cpp)
* Objetiv
### El objetivo de este programa es que se impriman el resultado de una determinada empresa que sus empleados son evaluados al final de cada año y quiere obtener en la evaluación es que comienze en 0.0 y pueden ir aumentando, traduciéndose en mejores beneficios. Los puntos que pueden conseguir los empleadospueden ser 0.0, 0.4, 0.6 o más, pero no valores intermedios entre las cifras mencionadas. A continuación se muestra una tabla con los niveles correspondientes a cada puntuación que se vera el resultado en el mismo programa.
```

```
<div align="center">
<img alt="Ejecuccion" src='Imagenes/Puntoscorrida.png' width='400'>
</div>

* [E5_monedas.cpp](https://github.com/up210710/UP210710_CPP/blob/main/U3%20Fuctions/E08_monedas.cpp)
* Objetiv
### The objective of this program is that at the moment of putting an amount of money it is in coins or bills of 1000,500,200,100,50,20,10,5,2 and finally 1.
```
#include <iostream>

using namespace std;

void obtenerCambio(int); //cambio - monto
void obtenerMonedas(int);
void imprimirCambio();

//variables globales 
int mil = 0, quinientos = 0, doscientos = 0, cien = 0;
int cincuenta = 0, veinte = 0;
int diez = 0, cinco = 0, dos = 0, uno = 0;
int resi; 

int main(){

    int dinero; 

    cout << "Dame la cantidad de dinero: ";
    cin >> dinero;
    cout << "\n"; 
    
    obtenerCambio(dinero);
    imprimirCambio();

    cout << endl; 
    return 0;
}

void obtenerMonedas(int dinero){

    diez = resi/10;
    resi = resi%10;
    cinco = resi/5;
    resi = resi%5;
    dos = resi/2;
    resi = resi%2;
    uno = resi/1;
    resi = resi%1;
}

void obtenerCambio(int dinero){
    mil=dinero/1000;
    resi = dinero%1000;
    quinientos = resi/500;
    resi = resi%500;
    doscientos = resi/200;
    resi = resi%200;
    cien = resi/100;
    resi = resi%100;
    cincuenta = resi/50;
    resi = resi%50;
    veinte = resi/20;
    resi = resi%20;

    obtenerMonedas(resi);
}

void imprimirCambio(){

    cout << "Tu cambio es: " << "\n"; 
    cout << "Billetes de $1000: \n" << mil << "\n";
    cout << "Billetes de $500: \n" << quinientos << "\n";
    cout << "Billetes de $200: \n" << doscientos << "\n";
    cout << "Billetes de $100: \n" << cien << "\n"; 
    cout << "Billetes de $50: \n" << cincuenta << "\n";
    cout << "Billetes de $20: \n" << veinte << "\n"; 
    cout << "Monedas de $10: \n" << diez << "\n";
    cout << "Monedas de $5: \n" << cinco << "\n";
    cout << "Monedas de $2: \n" << dos << "\n";
    cout << "Monedas de $1: \n" << uno << "\n"; 
}
```
<div align="center">
<img alt="Ejecuccion" src='Imagenes/Money.png' width='400'>
</div>

* [E06_Romanos.cpp](https://github.com/up210710/UP210710_CPP/blob/main/U3%20Fuctions/E09_Romanos.cpp)
* Objetiv
### The objective of this program is to convert Arabic numerals to Roman numerals.
```
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int valor[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string simbolo[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"}
          ,resultado="";
    int num,i=0;
    cout<<"Numero: ";
    cin>>num;
    if(num>=1 && num<=4000)
    {
        int temp = num;
        while(temp > 0)
        {
            while(temp >= valor[i])
            {
                resultado += simbolo[i];
                temp -= valor[i];
            }
            i++;
        }
        cout<<"Resultado: "<<resultado<<endl;
    }
    return 0;
}
```
<div align="center">
<img alt="Ejecuccion" src='Imagenes/Roma.png' width='400'>
</div>

* [09_Temperatura.cpp](https://github.com/up210710/UP210710_CPP/blob/main/U2%20Control%20Structures%20and%20Cycles/09_Temperatura.cpp)
* Objetivo
### El objetivo de este programa es que se impriman el resultado del programa en el que se ingresen 6 temperaturas y determine el promedio, la mas baja y la mas alta se vera el resultado en el mismo programa.
```
```
<div align="center">
<img alt="Ejecuccion" src='Imagenes/Temperaturacorrida.png' width='400'>
</div>

* [10_Precios.cpp](https://github.com/up210710/UP210710_CPP/blob/main/U2%20Control%20Structures%20and%20Cycles/10_Precios.cpp)
* Objetivo
### El objetivo de este programa es que se impriman el resultado del programa que lea indefinidamente cantidades de productos y su precio, y al final indique el total de la factura, Para saber que se ha terminado con la compra, se deberá ingresar un 0 en la cantidad y se vera el resultado en el mismo programa.
```
```
<div align="center">
<img alt="Ejecuccion" src='Imagenes/Precioscorrida.png' width='400'>
</div>

* [11_BintoDecim.cpp](https://github.com/up210710/UP210710_CPP/blob/main/U2%20Control%20Structures%20and%20Cycles/11_BintoDecim.cpp)
* Objetivo
### El objetivo de este programa es que se impriman el resultado del un programa que realice la conversión de binario a decimal, solo para números enteros mayores a 0. El resultado puede ser mostrado mediante una variable entera o en un conjunto de caracteres y se vera el resultado en el mismo programa.
```
```
<div align="center">
<img alt="Ejecuccion" src='Imagenes/Binocorrida.png' width='400'>
</div>