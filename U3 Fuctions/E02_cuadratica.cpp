#include <iostream>
#include <cmath>
using namespace std;

const double E=2.7182818284;
int doble(int a)
{
    int r;
    r = a * 2;
    return r;
}
int sumatoria(int n)
{
    int r = 0;
    for (int i = 0; i <= n; i++)
    {
        r = r + i;
    }
    return r;
}
double Ec(int x)
{
    double r;
    r = pow(x, 2) - 8 * x + 15;
    return r;
}
double Ec2(double x)
{
    double y;
    y = pow(E,-x)+4*pow(x,3)-5;
    return y;
}
string camello(string x)
{
    int lon= x.length();
    for (int i = 0; i < lon; i++)
    {
        if (islower(x[i])){
        x[i]=toupper(x[i]); 
        }  
        else{
        x[i]=tolower(x[i]);    
        }         
    }
    return x;
}
int main()
{
    int n = 10;
    double x = doble(5);
    /*
    x = sumatoria(n);
    cout << "La sumatoria de  " << n << "es : " << x << endl;
    */
    for (int i = 0; i <= 10; i++)
    {
        x = Ec(i);
        cout <<"X ="<<i <<" "<< "El resultado de la ecuacion: " << x << endl;
    }
    cout<<endl;
    x = Ec2(1.05151652);
    cout << "El resultado de la ecuacion es: " << x << endl;
    cout<<endl;
    printf("%12.10f",x);
    cout<<endl;
    string res = camello("Upa");
    cout<<res<<endl;
    return 0;
}