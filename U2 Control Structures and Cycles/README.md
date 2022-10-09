<div align="center">
<img alt="Welcome" src='Imagenes/Welcome.gif' width='400'>
</div>

# Programas de la unidad 2

## 01_abc.cpp
```
// Objetivo: Imprimir el abecedario
// Abecedario en minuscula
#include <iostream>
using namespace std;
int main()
{
    char letra1 = 'a'; // Letra = 'a'
    char letra2 = 90;  // Letra = 'A'
    char letra3 = 65;  // Letra = 'A'
    cout << "Abecedario en minusculas" << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << letra1 << "\t";
        letra1 = letra1 + 1;
    }
    cout << endl;
    cout << "Abecedario en minusculas al reves" << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << letra1 << "\t";
        letra1 = letra1 - 1;
    }
    cout << "Numeros descendentes: " << endl;
    for (int i = 10; i > 0; i--)
    {
        cout << i << "\t" << endl;
    }
    cout << "Abecedeario al reves: " << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << letra2 << "\t";
        letra2 = letra2 - 1;
    }
    cout << endl;
    cout << "Abecedeario normal: " << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << letra3 << "\t";
        letra3 = letra3 + 1;
    }
    getchar();
    return 0;
}
```
<div align="center">
<img alt="Ejecuccion" src='Imagenes/tramocorrida.png' width='400'>
</div>

## 02_tramo.cpp
```
/*
    Unidad 2. Ejericio De Las Edades
    Autor: Juan Manuel Rios Estrada
    Fecha: 27/09/2022
    Objetivo: Definir los tramos para la declaracion
              [1...10000    ] Impuesto 5%
              [10000...20000] Impuesto 15%
              [20000...35000] Impuesto 20%
              [35000...60000] Impuesto 30%
              [60000...     ] Impuesto 45%
*/

#include <iostream>
using namespace std;
int main()
{
    int Renta;
    float Impuesto, IcLr,Total;
    cout << "Introduce la cantidad de pago de la renta: ";
    cin >> Renta;
    cout << endl;
    if (Renta < 10000)
    {
        cout << "El impuesto total es del 5 %" << endl;
        Impuesto = 0.5;
    }
    else if (Renta >= 10000 && Renta < 20000)
    {
        cout << "El impuesto total es del 15 %" << endl;
        Impuesto = 0.15;
    }
    else if (Renta >= 20000 && Renta < 35000)
    {
        cout << "El impuesto total es del 20 %" << endl;
        Impuesto = 0.20;
    }
    else if (Renta >= 35000 && Renta < 60000)
    {
        cout << "El impuesto total es del 30 %" << endl;
        Impuesto = 0.30;
    }
    else if (Renta >= 60000)
    {
        cout << "El impuesto total es del 45 %" << endl;
        Impuesto = 0.45;
    }
    IcLr=Renta*Impuesto;
    Total=Renta-IcLr;
    cout << "El dinero de la renta con el impuesto es: " << Total<< endl;
    cout << "El impuesto aplicado es de: " << Renta * Impuesto << endl;
    getchar();
    return 0;
}
```
<div align="center">
<img alt="Ejecuccion" src='Imagenes/abccorrida.png' width='400'>
</div>

## 03_Tablas.cpp
```
#include <iostream>
using namespace std;
int main()
{
    int N, o, p = 1;
    cout << "Introduce el numero que quieres conocer su tabla de multiplicar: ";
    cin >> N;
    cout << "hasta que numero quieres la multiplicacion: ";
    cin >> o;

    cout << "Tabla de multiplicar de forma normal: " << endl;
    for (int i = 1; i <= o; i++)
    {
        cout << N << " X " << i << " = " << i * N << endl;
    }
    cout << "Tabla de multiplicar de forma descendentes: " << endl;
    for (int i = o; i > 0; i--)
    {
        cout << N << " X " << i << " = " << i * N << endl;
    }
    int j = 1;
    cout << "Tabla de multiplicar de forma normal con el while: " << endl;
    while (j <= o)
    {
        cout << N << " X " << j << " = " << j * N << endl;
        j++;
    }
    cout << "Tabla de multiplicar de forma descendentes con el while: " << endl;
    while (j > 0)
    {
        cout << N << " X " << j << " = " << j * N << endl;
        j--;
    }
    cout << "Tabla de multiplicar de forma normal con el do while: " << endl;
    do
    {
        cout << N << " X " << p << " = " << p * N << endl;
        p++;
    } while (p <= o);
    cout << "Tabla de multiplicar de forma descendentes con el do while: " << endl;
    do
    {
        cout << N << " X " << p << " = " << p * N << endl;
        p--;
    } while (p > 0);
    return 0;
}

```
<div align="center">
<img alt="Ejecuccion" src='Imagenes/Tablascorrida.png' width='400'>
</div>



# These are the exercises done in class
<center> Hola     

Bienvenido a la programacion 
</center>

# H1 Linea de encabezado 
**Texto en negritas**

__texto en negritas__

*Texto en cursiva*
> Cita de elementos 
---
***
___
1. Leer
2. Escribir
3. Ejecutar
   
<ol>
<li>Read</li>
<li>Write</li>
<li>Execute</li>
</ol>

* Primer elemento
* Segundo elemento
- Tercer elemento 
---


```
#include <iostream>
using namespace std;
int main()
{
    int E;
    cout << "Introduce la edad de una familiar: ";
    cin >> E;
    cout << endl;
    if (E > 0 && E <= 150)
    {
        if (E <= 30)
        {
            cout << "Primera edad " << endl;
        }
        else if (E >= 31 && E <= 60)
        {
            cout << "Segunda edad " << endl;
        }
        else if (E >= 61 && E <= 90)
        {
            cout << "Tercera edad " << endl;
        }
        else
        {
            cout << "Horas extras " << endl;
        }
    }
    else
    {
        cout << "Bajale carnal y el rango es invalido" << endl;
    }
    getchar();
    return 0;
}
```
![Check in out](Imagenes/Chamoy.jfif)

<div align="center">
<img alt="Chilito" src='Imagenes/Chilito.jfif' width='400'>
</div>

<div align="center">
<img alt="Una cena" src='Imagenes/cena.gif' width='400'>
</div>


## Tabla 
| Color | Codigo  |
| ----- | ------  |
| Rojo  | #FF0000 |
| Azul  | #cb3234 |

`https://www.google.com.mx`     
https://www.google.com.mx
>[MSN](https://www.google.com.mx/search?q=lluvia+de+hamburguesas+meme+policia&tbm=isch&hl=es-419&chips=q:lluvia+de+hamburguesas+meme+policia,online_chips:gif:TTYYAnxPX9I%3D&sa=X&ved=2ahUKEwjgpoHi0br6AhVqlWoFHQrlCCgQ4lYoAHoECAEQJA&biw=1733&bih=876#imgrc=Wv69Fg85VQ283M)

<a href="https://www.google.com.mx/search?q=lluvia+de+hamburguesas+meme+policia&tbm=isch&hl=es-419&chips=q:lluvia+de+hamburguesas+meme+policia,online_chips:gif:TTYYAnxPX9I%3D&sa=X&ved=2ahUKEwjgpoHi0br6AhVqlWoFHQrlCCgQ4lYoAHoECAEQJA&biw=1733&bih=876#imgrc=Wv69Fg85VQ283M">
https://www.google.com.mx/search?q=lluvia+de+hamburguesas+meme+policia&tbm=isch&hl=es-419&chips=q:lluvia+de+hamburguesas+meme+policia,online_chips:gif:TTYYAnxPX9I%3D&sa=X&ved=2ahUKEwjgpoHi0br6AhVqlWoFHQrlCCgQ4lYoAHoECAEQJA&biw=1733&bih=876#imgrc=Wv69Fg85VQ283M
</a>
