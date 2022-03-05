#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <cstring>

using namespace std;


int main(){

int zoologico[3][7]={};
double comidaMono[3]={};

int op;
int ap;
int suma = 0;
int menor, mayor;
do{
    system("cls");
    cout<<"(1) Introducir comida diaria de los monos. "<<endl;
    cout<<"(2) Ver la cantidad de comida de los monos. "<<endl;
    cin>>op;
    switch(op){

  case 1:
        system("cls");

              cout<<"mono (1). "<<endl;
              cout<<"mono (2). "<<endl;
              cout<<"mono (3). "<<endl;
              cin>>ap;
               switch(ap){
          case 1:
            system("cls");

             for(int mono=0;mono<1;mono++){
                for(int dias=0; dias<7;dias++){

                    cout<<" Introducir comida del mono : "<< mono+1 << " en el dia : " << dias+1 << endl;
                    cin>>zoologico[mono][dias];

                }
             }
            break;
     case 2:
            system("cls");
                for(int mono=1;mono<2;mono++){
                  for(int dias=0; dias<7;dias++){

                    cout<<" Introducir comida del mono : "<< mono+1 << " en el dia : " << dias+1<<endl;
                    cin>>zoologico[mono][dias];
                }
            }
            break;

     case 3:
            system("cls");
            for(int mono=2;mono<3;mono++){
                for(int dias=0; dias<7;dias++){

                    cout<<" Introducir comida del mono : "<< mono+1 << " en el dia : " << dias+1 << endl;
                    cin>>zoologico[mono][dias];

                }

            }
            break;

}
          system("pause");
    break;

        default:
        if(op<1 && op>3){
            cout<<"\n\tError algo salio mal "<<endl;
            system("pause");

            break;
            }


  case 2:
       system("cls");
    for (int mono=0;mono<3;mono++){
        for (int dias=0;dias<7;dias++){
        cout<<" mono "<<mono+1<<" " <<zoologico[mono][dias]<<endl;
        }
      }

    for (int mono=0;mono<3;mono++){
        for (int dias=0;dias<7;dias++){

         suma += zoologico[mono][dias];
        }
    }
    cout<<"El promedio es: "<<suma/27<<endl;

    for(int mono=0;mono<1;mono++){
                for(int dias=0; dias<7;dias++){

                comidaMono[0] += zoologico[mono][dias];
        }

    }


    for(int mono=1;mono<2;mono++){
                for(int dias=0; dias<7;dias++){

                comidaMono[1] += zoologico[mono][dias];

                }
    }



    for(int mono=2;mono<3;mono++){
                for(int dias=0; dias<7;dias++){

                comidaMono[2] += zoologico[mono][dias];
                }
    }
        for (int comida=0;comida<3;comida++){
            cout<<comidaMono[comida]<<endl;
        }

        menor = comidaMono[0];
        for (int i=0; i<3; i++){
            if (menor>comidaMono[i]){
            menor = comidaMono[i];
            }
        }
            cout<<"La cantidad de comida menor: "<<menor<<endl;

        mayor = comidaMono[0];
        for (int i=0; i<3; i++){
            if (mayor<comidaMono[i]){
                mayor = comidaMono[i];
            }
        }

        cout<<"La cantidad de comida mas alta: "<<mayor<<endl;
  break;

  }

}while(op !=2);


}
