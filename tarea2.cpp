#include<iostream>

using namespace std;

int main(){
    double p1,p2,p3, suma = 0, promedio = 0, p4 = 3;
    cout<<"Digite un numero "; cin>>p1;
    cout<<"Digite el otro numero   "; cin>>p2;
    cout<<"Digite el tercer numero  ";cin>>p3;

    suma = p1 + p2 + p3;
    promedio = (p1 + p2 + p3) / p4;

    cout<<"\nLa suma es : "<<suma<<endl;
    cout<<"El promedio es : "<<promedio<<endl;

    return 0;

}
