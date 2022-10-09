/*
Date: 09/10/2022
Author: Juan Manuel Rios Estrada
Email: up210710@alumnos.upa.edu.mx
Description: Calcular el precio de una compra.
Last Modification: 09/10/2022
*/
#include <iostream>
using namespace std;
int main()
{

    int producto;
    float precio;
    float calculo = 0;
    float total = 0;
    int vuelta;

    cout << "Bienvenido al oxxo \n";

    do
    {
        cout << "Dame la cantidad de productos \n";
        cin >> producto;

        if (producto != 0 and producto > 0)
        {

            cout << "Dime el precio del producto. \n";
            cin >> precio;

            total += (precio * producto);
        }

    } while (producto != 0);

    cout << "El total de tu compra es: \n"
         << total << endl;

    return 0;
}