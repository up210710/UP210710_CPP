/*
Date: 07/10/2022
Author: Juan Manuel Rios Estrada
Email: up210710@alumnos.upa.edu.mx
Description: pase para juegos
Last Modification: 09/10/2022
*/
#include <iostream>
using namespace std;

int main()
{
    int edad;
    int precio;
    cout << "Cuantos años tienes ";
    cin >> edad;
    if (edad < 4)
        precio = 0;
    else if (edad >= 4 && edad <= 18)
        precio = 5;
    else if (edad > 18)
        precio = 10;
    cout << "Tienes que pagar: $" << precio << endl;
    cout << "Bienvenidos a los Juegos de Los Pollos Hermanos" << endl;
    return 0;
}