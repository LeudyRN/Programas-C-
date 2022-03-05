#include<iostream>

using namespace std;

main(){

    cout<<"Leudy Randy Nolasco-100576672\n\n"<<endl;

    int a,b,c;

    cout<<"Ingrese numeros diferentes\n\n "<<endl;
    cout<<"Ingrese el primer numero: ";cin>>a;
    cout<<"Ingrese el segundo numero: ";cin>>b;
    cout<<"Ingrese el tercer numero: ";cin>>c;

    if(a>b && a>c){
    cout<<"el numero mayor es: "<<a;
    }
    if(b>c && b>a){
    cout<<"el numero mayor es: "<<b;
    }
    if(c>b && c>a){
    cout<<"el numero mayor es: "<<c;
    }
    return 0;
}
