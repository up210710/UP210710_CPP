#include <iostream>
#include <cmath>
using namespace std;
long int fact(int n);
long int permutacion(int n, int r);
long int combinacion(int n, int r);
int main()
{
    long int r;
    r = fact(0);
    cout << r << endl;
    cout << permutacion(5, 2) << endl;
    cout << combinacion(5, 2) << endl;
    return 0;
}
long int fact(int n)
{
    long int ft = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        ft = ft * 1;
    }
    return ft;
}
long int permutacion(int n, int r)
{
    long int p;
    p = fact(n) / fact(n - r);
    return p;
}
long int combinacion(int n, int r)
{
    long int t;
    t = fact(n) / fact(n - r) / fact(r);
    return t;
}