/*
Date: 09/10/2022
Author: Juan Manuel Rios Estrada
Email: up210710@alumnos.upa.edu.mx
Description: conversión de binario a decimal
Last Modification: 09/10/2022
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int exp,digito;
    double binario, decimal;
   cout << "Introduce numero: ";
   cin >> binario;
   exp=0;
   decimal=0;
   while(((int)(binario/10))!=0)
   {
           digito = (int)binario % 10;
           decimal = decimal + digito * pow(2.0,exp);
           exp++;
           binario=(int)(binario/10);
   }
   decimal=decimal + binario * pow(2.0,exp);
   cout << endl << "Decimal: " << decimal << endl;
    
    return 0;
}