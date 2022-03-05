#include<iostream>
#include<cstdlib>
#include<cstring>
#include <string>

using namespace std;

void concatena(string* c1, string* c2);

int getMatriz();
int getCadena();

int main(){

   int op;

   do{

        system("cls");
        cout<<"(1) Ver Matriz. "<<endl;
        cout<<"(2) Cadena con uso string. "<<endl;
        cout<<"(3) Me puedo ir ya?"<<endl;
        cin>>op;
        switch(op){
    case 1:
        system("cls");
        getMatriz();
        system("pause");
        break;


    case 2:
        system("cls");
        getCadena();
        system("pause");
        break;

    case 3:
        system("cls");
        cout<<"\n\nClaro ya te puedes ir JAJA "<<endl;
        system("pause");
        break;
    default:
        if(op<1 && op>3){
        cout<<"\n\tError algo salio mal "<<endl;
        system("pause");
    }

        break;
        }

   }while(op !=3);

}

int getMatriz(){



    int numeros[100][100],filas,columnas;

    cout<<"Leudy Randy Nolasco-100576672\n\n";
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;

	//Rellenando la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}

	cout<<"\nMostrando matriz\n\n";

	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}

}

int getCadena(){

    cout<<"Leudy Randy Nolasco-100576672\n\n"<<endl;
    string cadena1, cadena2;

    cout<<"Introduce la primera Cadena: "; getline(cin, cadena1);
    cout<<"Ahora la segunda Cadena: "; getline(cin, cadena2);

    concatena(&cadena1, &cadena2);

    cout<<endl;

    return 0;

}

void concatena(string* c1, string* c2)
{
    *c1 = *c1 + *c2;

    cout << endl << *c1;
}



