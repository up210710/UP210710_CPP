#include <iostream>
using namespace std;
int main()
{
    int n = 10, suma = 0, suma1 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            suma += i;
        }
        else
        {
            suma1 += i;
        }
    }
    printf(" El numero impar es %d \n", suma1);
    cout << endl;
    printf(" El numero par es : %d \n", suma);
    cout << endl;
    cout << "El total de la suma de numeros &d" << suma1 + suma;
    cout << endl;
    return 0;
}
