#include <iostream>
using namespace std;

int doble(int a)
{
    int r;
    r=a*2;
    return r;
}
int sumatoria(int n){
    int r=0;
    for (int i = 0; i <= n; i++)
    {
        r=r+i;
    }
    return r;
}
int main()
{
    int n=10;
    int x=doble(5);
    x=sumatoria(n);
    cout<<"La sumatoria de  "<<n<<"es : "<<x<<endl;
    return 0;
}