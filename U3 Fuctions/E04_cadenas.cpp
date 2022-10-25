#include <iostream>
#include <cmath>
using namespace std;

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
char camilo(char y){
	int p=0;
	while(y[p] != '\0'){
        if (islower(y[p])){
        y[p]=toupper(y[p]); 
        }
        else{
        y[p]=tolower(y[p]);    
        }     
        cout<<y[p]<<" ";
        p++;
	}
	return y;
}
int main()
{
	char txt;
    char pal[60]="Universidad Politecnica de Aguascalientes";
    //cout<<"Introduce cualuiqer palabra"<<endl;cin>>pal;
    cout<<endl;
    txt=camilo(pal);
    cout<<"->"<<txt<<endl;
    return 0;
}