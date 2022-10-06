#include <iostream>
using namespace std;
int main()
{
    int N, o, i = 1;
    char opcion = 's';
    cout << "hasta que numero quieres la multiplicacion: ";
    cin >> o;
    while (opcion == 's')
    {
        cout << "Introduce el numero que quieres conocer su tabla de multiplicar: " << endl;
        cout << "Numero: ";
        cin >> N;
        do
        {
            cout << N << " X " << i << " = " << i * N << endl;
            i++;
        } while (i <= o);
        cout << "Tabla de multiplicar de forma descendentes: " << endl;
        do
        {
            cout << N << " X " << i << " = " << i * N << endl;
            i--;
        } while (i > 0);
        cout << "Deseas otro <s/n>";
        cin >> opcion;
    }
    cout << "....Hecho";
    return 0;
}