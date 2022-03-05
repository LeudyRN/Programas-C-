#include<iostream>

using namespace std;

float salario(float horas, float valor){

    float x;
    x=horas*valor;
    return x;

}

int main(){

cout<<"*****Leudy Randy Nolasco-100576672******\n\n "<<endl;
cout<<"Recordar que si las horas trabajadas pasan de 35\nSe contaran como horas extras y seran 25. "<<endl;


float h, valor;

 cout<<"Ingrese las horas trabajadas: ";
 cin>>h;
 cout<<"Ingrese el valor de las horas trabajadas: ";
 cin>>valor;

 cout<<"El salario es: "<<salario(h,valor);

}
