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