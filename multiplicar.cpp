#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	do{
		cout<<"INGRESE UN NUMERO: ";
		cin>>numero;

	}while((numero<1) || (numero>50));

	for(int i=1; i<=50; i++){
		cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
	}
	return 0;
}
