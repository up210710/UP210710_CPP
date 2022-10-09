// Objetivo: Imprimir el abecedario
// Abecedario en minuscula
#include <iostream>
using namespace std;
int main()
{
    char letra1 = 'a'; // Letra = 'a'
    char letra2 = 90;  // Letra = 'A'
    char letra3 = 65;  // Letra = 'A'
    cout << "Abecedario en minusculas" << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << letra1 << "\t";
        letra1 = letra1 + 1;
    }
    cout << endl;
    cout << "Abecedario en minusculas al reves" << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << letra1 << "\t";
        letra1 = letra1 - 1;
    }
    cout << "Numeros descendentes: " << endl;
    for (int i = 10; i > 0; i--)
    {
        cout << i << "\t" << endl;
    }
    cout << "Abecedeario al reves: " << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << letra2 << "\t";
        letra2 = letra2 - 1;
    }
    cout << endl;
    cout << "Abecedeario normal: " << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << letra3 << "\t";
        letra3 = letra3 + 1;
    }
    getchar();
    return 0;
}