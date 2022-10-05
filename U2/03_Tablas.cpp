#include <iostream>
using namespace std;
int main()
{
    int N, o;
    cout << "Introduce el numero que quieres conocer su tabla de multiplicar: ";
    cin >> N;
    cout << "hasta que numero quieres la multiplicacion: ";
    cin >> o;

    cout << "Tabla de multiplicar de forma normal: " << endl;
    for (int i = 1; i <= o; i++)
    {
        cout << N << " X " << i << " = " << i * N << endl;
    }
    cout << "Tabla de multiplicar de forma descendentes: " << endl;
    for (int i = o; i > 0; i--)
    {
        cout << N << " X " << i << " = " << i * N << endl;
    }
    int j = 1;
    cout << "Tabla de multiplicar de forma normal con el while: " << endl;
    while (j <= o)
    {
        cout << N << " X " << j << " = " << j * N << endl;
        j++;
    }
    cout << "Tabla de multiplicar de forma descendentes con el while: " << endl;
    while (j > 0)
    {
        cout << N << " X " << j << " = " << j * N << endl;
        j--;
    }

    return 0;
}
