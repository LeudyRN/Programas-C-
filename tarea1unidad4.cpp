#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <cstring>

using namespace std;
int main(){
    struct Maquina
    {
         string nombreBebidas;
         double precioBebidas;
         int cantidadEnMaquina;
    };


    Maquina bebidas[5];
    //nombre
    bebidas[0].nombreBebidas="Botella de Agua";
    bebidas[1].nombreBebidas="Coca Cola";
    bebidas[2].nombreBebidas="Seven Up";
    bebidas[3].nombreBebidas="Montain Dew";
    bebidas[4].nombreBebidas="Jugo V8";
    //precio
    bebidas[0].precioBebidas=20.00;
    bebidas[2].precioBebidas=20.00;
    bebidas[3].precioBebidas=25.00;
    bebidas[4].precioBebidas=30.00;
    bebidas[1].precioBebidas=50.00;
    //cantidad
    bebidas[0].cantidadEnMaquina=20;
    bebidas[1].cantidadEnMaquina=20;
    bebidas[2].cantidadEnMaquina=20;
    bebidas[3].cantidadEnMaquina=20;
    bebidas[4].cantidadEnMaquina=20;

    cout<<"__________________"<<endl;
    cout<<"Nombre de la bebida \t";
    cout<<"Costo \t";
    cout<<"Cantidad en maquina"<<endl;;
    cout<<"__________________"<<endl;
    for(int i=0;i<5;i++){
        cout<<bebidas[i].nombreBebidas<<"\t\t|";
        cout<<bebidas[i].precioBebidas<<"\t\t|";
        cout<<bebidas[i].cantidadEnMaquina;
        cout<<endl;
    }
    int op;

    do{
        system("cls");
        cin.clear();

        cout<<"(1) Elegir una bebida. "<<endl;
        cout<<"(2) Salir... "<<endl<<endl;

        cin >> op;
        switch(op)
        {
            case 1:
                system("cls");
                cout<<"Asi que que quieres una bebida. ";
                system("pause");
                break;

            case 2:
                system("cls");
                cout<<"\n\n\tSaliendo... :"<<endl;
                system("pause");
                break;
                    default:
            if(op<1 && op>2){
            cout<<"\n\tError algo salio mal "<<endl;
            system("pause");
            }
            break;
        }
    }while (op !=2);
}




double precioBebidas[] = {20.00,20.00,25.00,30.00,50.00};
int resta = 0;

    cout<<"\nIngrese el monto a pagar: "<<endl;
    cin>>resta;

    for (int i=0;i<5;){
        resta = resta - precioBebidas[i];

        }


