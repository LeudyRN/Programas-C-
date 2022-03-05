#include<iostream>
#include<math.h>

using namespace std;


int main(){

    cout<<"Leudy Randy Nolasco-100576672\n\n"<<endl;
    int a=0,i;
    long double factorial;
	long long int numero;
	int j;

	cout<<"Digite un numero: ";
	cin>>numero;

	if(numero==0){
		cout<<"El numero es cero\n";
	}
	else if(numero%2==0){
		cout<<"El numero es par\n";
	}
	else{
		cout<<"El numero es impar\n";
	}

		if(numero==0){
		cout<<"El numero es cero\n";
	}
	else if(numero>0){
		cout<<"El numero es positivo\n";
	}
	else{
		cout<<"El numero es negativo\n";
	}
    for(i=1;i<(numero+1);i++){
         if(numero%i==0){
         a++;
            }
         }
         if(a!=2){
              cout<<"No es Primo\n";
            }else{
                cout<<"Si es Primo\n";
         }

   factorial=1;
   for(j=1;j<=numero;j++)
        factorial = factorial * j;
   cout << endl << "Factorial de " << numero << " -> " << factorial << endl;

    double resultado = pow(numero, 2);


    cout<<"El cuadrado es:"<<resultado<<endl;

	return 0;
}
