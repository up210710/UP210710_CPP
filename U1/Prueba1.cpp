#include <iostream>
#include <math.h>
using namespace std;
float SUMA = 0;
int N, i = 1;
int main()
{
    cout << "Teclee hasta que numero desea la suma:";
    cin >> N;
    while (i <= N)
    {
        SUMA = SUMA + (i / (pow(2, i)));
        i = i + 1;
    }
    cout << "La suma es:" << SUMA;
    return 0;
}