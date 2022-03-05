#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <cstring>

using namespace std;

int main()
{

long empld[7] = {5658845 ,8452377 ,4520125 ,1302850 ,7895122 ,7580489 ,8777541};

int horas[7] = {1,6,8,8,8,8,10};
double tarifaPorHora[7] = {100,565,55,66,33,333,987};
double salarioBruto[7];
int ap;
int op;

do{
    system("cls");
    cout<<"(1) Desplegar empleados. "<<endl;
    cout<<"(2) Elegir Empleados. "<<endl;
    cin>>op;
    switch(op){

    case 1:
        system("cls");

       for(int i=0 ;i<7 ;i++)
            {
            salarioBruto[i] = horas[i] * tarifaPorHora[i];
            cout<<"No."<<i+1<<"- "<<empld[i]<<endl << " Horas trabajdas " << horas[i]<<endl <<" Tarifa por hora " << tarifaPorHora[i]<<endl << " Sueldo Bruto " << salarioBruto[i]<<endl;

            }

             system("pause");
        break;

  case 2:
        system("cls");

              cout<<"empleado (1). "<<endl;
              cout<<"empleado (2). "<<endl;
              cout<<"empleado (3). "<<endl;
              cout<<"empleado (4). "<<endl;
              cout<<"empleado (5). "<<endl;
              cout<<"empleado (6). "<<endl;
              cout<<"empleado (7). "<<endl;
              cin>>ap;
               switch(ap){
          case 1:
            system("cls");
            cout<<"Introducir Horas"<<endl;
            cin>>horas[0];
            cout<< "Introducir Tarifa por horas"<<endl;
            cin>>tarifaPorHora[0];
            break;
     case 2:
            system("cls");
            cout<<"Introducir Horas"<<endl;
            cin>>horas[1];
            cout<< "Introducir Tarifa por horas"<<endl;
            cin>>tarifaPorHora[1];
            break;

     case 3:
            system("cls");
            cout<<"Introducir Horas"<<endl;
            cin>>horas[2];
            cout<< "Introducir Tarifa por horas"<<endl;
            cin>>tarifaPorHora[2];
            break;
     case 4:
            system("cls");
            cout<<"Introducir Horas"<<endl;
            cin>>horas[3];
            cout<< "Introducir Tarifa por horas"<<endl;
            cin>>tarifaPorHora[3];
            break;

     case 5:
            system("cls");
            cout<<"Introducir Horas"<<endl;
            cin>>horas[4];
            cout<< "Introducir Tarifa por horas"<<endl;
            cin>>tarifaPorHora[4];
            break;
     case 6:
            system("cls");
            cout<<"Introducir Horas"<<endl;
            cin>>horas[5];
            cout<< "Introducir Tarifa por horas"<<endl;
            cin>>tarifaPorHora[5];
            break;

     case 7:
            system("cls");
            cout<<"Introducir Horas"<<endl;
            cin>>horas[6];
            cout<< "Introducir Tarifa por horas"<<endl;
            cin>>tarifaPorHora[6];
            break;

         }

        system("pause");
    break;

        default:
        if(op<1 && op>2){
            cout<<"\n\tError algo salio mal "<<endl;
            system("pause");
        }
     break;
            }


        }while(op !=7);

}
/*
 void CalcularSueldo(){
        for(int i=0;i<7;i++){


        }
    }

*/


