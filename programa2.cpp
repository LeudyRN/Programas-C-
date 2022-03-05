#include <iostream>
#include <string.h>

using namespace std;

int main ()
{
    float n[100], c;
    char orden[3];
    setlocale(LC_CTYPE, "Spanish"); //Tildes
    cout<<"Leudy Randy Nolasco-100576672\n"<<endl;
    cout << "Este programa ordena N números "<<endl;
	cout << "Ingrese la cantidad de números a ordenar: ";
	cin>>c;

	while (strcmp(orden, "a") && strcmp(orden, "d")){//Verifica que sea asc o des unicamente.
	cout << "Digite (a) para ordenarlos de forma ascendente o (d) para ordenarlos de forma descendente: ";
	cin>>orden;
	}


	for (int i=1;i<=c;i++){
		cout<<"Ingrese el número: ";
		cin>>n[i];
	}

    float Temp;
    	for(int i=1;i<=c;i++){
            for(int j=1;j<=c-1;j++){

            	if (strcmp(orden, "a")){
            		if(n[j]<n[j+1]){// cambia "<" a ">" para cambiar la manera de ordenar
                    Temp=n[j];
                    n[j]=n[j+1];
                    n[j+1]=Temp;
                    }
				}

				if (strcmp(orden, "d")){
            		if(n[j]>n[j+1]){// cambia "<" a ">" para cambiar la manera de ordenar
                    Temp=n[j];
                    n[j]=n[j+1];
                    n[j+1]=Temp;
                    }
				}
                }
            }

	cout << "Los números ordenados son: "<< endl;

    for(int j=1;j<=c;j++){
            cout << n[j]<< endl;
    }

    system ("pause");
    return 0;
}
