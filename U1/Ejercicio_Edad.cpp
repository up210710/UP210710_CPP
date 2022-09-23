#include <iostream>
using namespace std;
int main(){
    int E,i=0;
    while(i<=5){
    cout<<"Introduce la edad de una familiar: ";
    cin>>E;
    cout<<endl;
    if(E>0 && E<=150){
        if(E<=30){
            cout<<"Primera edad ";
            cout<<endl;
        }
        else if(E<31 && E<=60){
            cout<<"Segunda edad ";
            cout<<endl;
        }
        else if(E<61 && E<=90){
            cout<<"Tercera edad ";
            cout<<endl;
        }
        else if(E<90 && E<=150){
            cout<<"Horas extras ";
            cout<<endl;
        }
    }
    else{
        cout<<"Bajale carnal ";
        cout<<endl;
    }
    i=i+1;
    }
    getchar();
    return 0;
}