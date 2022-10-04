#include<iostream> 
using namespace std;
int main(){
    int N,o;
    cout<<"Introduce el numero que quieres conocer su tabla de multiplicar: ";
    cin>>N;
    cout<<"hasta que numero quieres la multiplicacion: ";
    cin>>o;
    for(int i=1; i<=o; i++){
    	cout<<N<<" X "<<i<<" = "<<i*N<<endl;
    }
    
    return 0;
}