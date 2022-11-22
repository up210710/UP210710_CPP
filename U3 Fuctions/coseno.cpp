#include <iostream>
#include <math.h>
using namespace std;

#define n 6
#define PI 3.1416

long double fact(int num)
{
    long double p= 1.0;
    for (int i = 1; i <= num; i++)
    {
        p *= i;
    }
    return p;
}

double rad(double grd)
{
    return grd * PI / 180;
}

double cos(double x)
{
    double resultado = 0;
    for (int i = 0; i <= n; i++)
    {
        resultado = resultado + (pow(-1, i)*((pow(x, 2 * i)) / fact(2 * i)));
    }
    return resultado;
}
int main()
{
    double angulo = rad(60), print;
    print = cos(angulo);
    cout << "Coseno de 60 igual a  " << print << endl;
    return 0;
}