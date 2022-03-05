#include <iostream>
#include <math.h>
using namespace std;


main()
{
	//.....INTRODUCIR TAMANO DEL VECTOR

	int tamano;
	int multiplicacion[10]={0};
	int total=0;

	cout<<"Introducir tamano: ";
	cin>>tamano;

	cout<<endl<<endl;

	float vector1[tamano], vector2[tamano], vector3[tamano];

	cout<<"VECTOR 1:"<<endl;
	for(int i=0; i<tamano; i++)
	{
		cout<<"Posicion "<<i+1<<" : ";
		cin>>vector1[i];
	}

	cout<<endl<<"VECTOR 2:"<<endl;
	for(int i=0; i<tamano; i++)
	{
		cout<<"Posicion "<<i+1<<" : ";
		cin>>vector2[i];
	}
	cout<<endl<<"VECTOR 3:"<<endl;
	for(int i=0; i<tamano; i++)
	{
		cout<<"Posicion "<<i+1<<" : ";
		cin>>vector2[i];
	}


	cout<<endl<<"multiplicacion de vectores:"<<endl;
	for(int i=0; i<tamano; i++){
		multiplicacion[i]=vector1[i]*vector2[i]*vector3[i];


     total+=multiplicacion[i];
	}
	cout<<endl;
	cout<<" producto punto: "<<total<<endl;
	//-2147483648

}
