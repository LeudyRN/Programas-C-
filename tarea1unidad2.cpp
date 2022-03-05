#include<iostream>
using namespace std;

int suma(int x)
{
    int sum=0,i=0;

    while(i<x)
        {
        if(i%2==0)
        {
            sum=sum+1;
        }
        i=i+1;

        if(i%7==0)
        {
          sum=sum+1;
        }
    }
    return sum;
}
int main ()
{
    int numDesde,numHasta;
    cout<<"Ingrese el valor de numDesde: ";cin>>numDesde;

    numHasta=suma(numDesde);
    cout<<"El multiplo de  "<<numDesde<<" es: "<<numHasta;
    return 0;
}
