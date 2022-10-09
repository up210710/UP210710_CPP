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
        for (int j = 1; j <= o; j++)
        {
            cout << endl;
            cout << i << " X " << j << " = " << i * j << endl;
        }
    }
    return 0;
}