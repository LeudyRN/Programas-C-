#include<iostream>

using namespace std;

int main(){
    int p1,p2, suma = 0, resta = 0, multiplicacion = 0, division = 0, residuo = 0;

    cout<<"Digite un numero "; cin>>p1;
    cout<<"Digite el otro numero "; cin>>p2;

    suma = p1 + p2;
    resta = p1 - p2;
    multiplicacion = p1 * p2;
    division = p1 / p2;
    residuo = p1 % p2;
    cout<<"\nLa suma es : "<<suma<<endl;
    cout<<"La resta es : "<<resta<<endl;
    cout<<"La multiplicacion es : "<<multiplicacion<<endl;
    cout<<"La division es : "<<division<<endl;
    cout<<"El residuo es : "<<residuo;

    return 0;

}
