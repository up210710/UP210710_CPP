/*
    Unidad 1. Ejericio De Las Edades
    Autor: Juan Manuel Rios Estrada
    Fecha: 27/09/2022
    Objetivo: Definir la etapa de la persona
              [1...150] Validacion
              [1...30 ] 1ra Edad
              [31...60] 2da Edad
              [61...90] 3ra Edad
              [91...  ] Horas extras
*/

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
            cout << "Primera edad ";
            cout << endl;
        }
        else if (E >= 31 && E <= 60)
        {
            cout << "Segunda edad ";
            cout << endl;
        }
        else if (E >= 61 && E <= 90)
        {
            cout << "Tercera edad ";
            cout << endl;
        }
        else if (E >= 91)
        {
            cout << "Horas extras ";
            cout << endl;
        }
    }
    else
    {
        cout << "Bajale carnal y el rango es invalido";
        cout << endl;
    }
    getchar();
    return 0;
}