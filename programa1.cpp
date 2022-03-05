#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){

int num,i;

    cout<<("Leudy Randy Nolasco-100576672\n ");
    cout<<("Programa Para calcular el multiplo\n ");

    cout<<("Ingrese un numero del 2 al 10: ");
    scanf("%d", &num);

    cout<<("Su multiplo es \n");

    for(i=0; i<=500; i=num+i)
    {
        printf("%d \n",i);
    }
    getch();
    return 0;

}
