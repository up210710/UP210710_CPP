/*
Date: 07/10/2022
Author: Juan Manuel Rios Estrada
Email: up210710@alumnos.upa.edu.mx
Description: Temperatura
Last Modification: 09/10/2022
*/
#include <iostream>
using namespace std;
int main()
{
    float temperatura;
    int contador = 1;
    float tempeAcum = 0;
    int temperatura_min = 9999, temperatura_max = -9999;
    cout << "Bienvenido a las Farmacias UPA´s \n";
    do
    {
        cout << "dame una temperatura" << endl;
        cin >> temperatura;
        tempeAcum += temperatura;

        contador++;
        if (temperatura <= temperatura_min)
        {
            temperatura_min = temperatura;
        }
        if (temperatura >= temperatura_max)
        {
            temperatura_max = temperatura;
        }
    } while (contador <= 6);
    cout << "La temperatura promedio de hoy es: " << tempeAcum / 6 << endl;
    cout << "La temperatura mínima es: " << temperatura_min << endl;
    cout << "La temperatura máxima es: " << temperatura_max << endl;
    return 0;
}