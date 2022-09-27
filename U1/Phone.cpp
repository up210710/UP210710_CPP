#include <iostream>
using namespace std;
char NOTA;
int main()
{
    cout << "Teclee la nota";
    cin >> NOTA;
    switch (NOTA)
    {
    case 'A':
        cout << "sobresaliente";
        break;
    case 'B':
        cout << "Notable";
        break;
    case 'C':
        cout << "Aprobado";
        break;
    case 'D':
        cout << "Reprobado";
        break;
    default:
        cout << "Nota no valida";
    }
    return 0;
}