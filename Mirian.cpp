#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	float u[10],v[10];
	float punto[10]={0};
	float total=0;
	int n,m;

	cout<<"tamano del primer vector: "<<endl;
	cin>>n;
	cout<<"tamano del segundo vector: "<<endl;
	cin>>m;

	if(n!=m)

	{
		cout<<"deben ser vectores del mismo tamano: "<<endl;


	}
	else{
		cout<<"llenado de vector: "<<endl;
		for(int i=0;i<n;i++)
		    cin>>u[i];
		cout<<"llenado de vector: "<<endl;
		for(int j=0;j<m;j++)
		   cin>>v[j];


	}

	for(int l=0; l<m;l++)	{
			punto[l]=u[l]*v[l];


	//cout<<"resultado:  "<<punto[l];
	total+=punto[l];
	}

	cout<<endl;
	cout<<" producto punto: "<<total<<endl;

}
