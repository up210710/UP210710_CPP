/*
Date: 07/10/2022
Author: Juan Manuel Rios Estrada
Email: up210710@alumnos.upa.edu.mx
Description: Puntuacion de usuario y bono
Last Modification: 09/10/2022
*/
#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    double punto;
    double monto = 2400;
    double beneficio = 0;

    cout << "Cuál es la puntuación del usuario? ";
    cin >> punto;
    if (punto == 0.0)
    {
        cout << "Su nivel es Inaceptable \n";
        beneficio = monto * punto;
        cout << "tu beneficio es: $" << beneficio << endl;
    }
    else if (punto == 0.4)
    {
        cout << "Su nivel es aceptable  \n";
        beneficio = monto * punto;
        cout << "tu beneficio es: $" << beneficio << endl;
    }
    else if (punto > 1)
    {
        cout << "Introduce una puntuación válida" << endl;
    }
    else if (punto >= 0.6)
    {
        cout << "Tu nivel es Mérito \n";
        beneficio = monto * punto;
        cout << "tu beneficio es: $" << beneficio << endl;
    }
    else
    {
        cout << "Introduce una puntuación válida" << endl;
    }
    return 0;
}