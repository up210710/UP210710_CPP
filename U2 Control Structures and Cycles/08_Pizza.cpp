/*
Date: 07/10/2022
Author: Juan Manuel Rios Estrada
Email: up210710@alumnos.upa.edu.mx
Description: Pizza vegetariana y no vegetariana
Last Modification: 09/10/2022
*/
#include <iostream>
using namespace std;
int main()
{

    int pizza;
    int typo;
    int ingredientes = 0;
    cout << "que tipo de pizza quieres \n";
    cout << "Elige con 1 y 2 \n";
    cout << "pizza vegetariana es 1 \n";
    cout << "La pizza normal es 2 \n";
    cin >> typo;
    if (typo == 1)
    {
        cout << "Seleccionas una Pizza Vegetariana \n";
        cout << "Elige un ingrediente \n";
        cout << "Puedes elegir pimienta o tofu \n";
        cout << "Elige con 1 y 2 \n";
        cout << "la pimienta es 1 \n";
        cout << "El Tofu es el 2 \n";
        cin >> ingredientes;
        if (ingredientes == 1)
        {
            cout << "tu eliges la pimienta \n";
            cout << "Y tu pizza incluye Pimienta, Queso de Soja y Salsa de Tomate \n";
            cout << "\n";
        }
        else if (ingredientes == 2)
        {
            cout << "tu eliges el Tofu \n";
            cout << "Y tu pizza incluye Tofu, Queso de Soja y Salsa de Tomate \n";
            cout << "\n";
        }
    }
    if (typo == 2)
    {
        cout << "Seleccionas una Pizza Normal \n";
        cout << "Elige un ingrediente \n";
        cout << "You can chose pepperoni, ham or salmon \n";
        cout << "Puedes elegir pepperoni, jamón o salmón\n";
        cout << "EL Pepperoni es el 1 \n";
        cout << "El jamon es el 2 \n";
        cout << "El Salmon es el 3 \n";
        cout << "\n";
        cin >> ingredientes;
        if (ingredientes == 1)
        {
            cout << "Tu eliges el pepperoni \n";
            cout << "Y tu pizza incluye pepperoni, mozarella y salsa de tomate \n";
            cout << "\n";
        }
        else if (ingredientes == 2)
        {
            cout << "Tu eliges el jamon \n";
            cout << "Y tu pizza incluye jamón, mozarella y salsa de tomate \n";
            cout << "\n";
        }
        else if (ingredientes == 3)
        {
            cout << "Tu eliges el salmon \n";
            cout << "Y tu pizza incluye salmón, mozarella y salsa de tomate \n";
            cout << "\n";
        }
    }
    cout << "tu pizza estará lista en menos de lo que canta un águila \n";
    cout << "GRACIAS POR visitar Box Pizzas ";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    return 0;
}