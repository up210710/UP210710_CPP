#include <iostream>
using namespace std;
int main(){
    int E;
    cout<<"Introduce la edad de una familiar: ";
    cin>>E;
    cout<<endl;
    if(E>0 && E<=150){
        if(E<=30){
            cout<<"Primera edad ";
            cout<<endl;
        }
        if(E<31 && E<=60){
            cout<<"Segunda edad ";
            cout<<endl;
        }
        if(E<61 && E<=90){
            cout<<"Tercera edad ";
            cout<<endl;
        }
        if(E<90 && E<=150){
            cout<<"Horas extras ";
            cout<<endl;
        }
    }
    else{
        cout<<"Bajale carnal ";
        cout<<endl;
    }
    return 0;
}