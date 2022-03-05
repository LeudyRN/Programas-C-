#include<iostream>
#include <cstdlib>
#include <cstdlib>
#include <cstring>

using namespace std;


int main(int argc, char** argv){

    const int CANT_ARGS_PERMITIDOS = 4;
    const string SUMA = "+";
    const string RESTA = "-";
    const string MULTIPLICACION = "X";
    const string DIVISION = "/";
    const string RESIDUO = "%";
    const string POTENCIA = "^";
    double num1 = 0;
    double num2 = 0;

    int op;

    do{
        system("cls");
        cout<<"Leudy Randy Nolasco-100576672"<<endl;
        cout<<"**********Bienvenidos a la calculadora por Argumentos**********"<<endl;
        cout<<"Que desea realizar:\n"<<endl;

        cout<<"(1) Sumar "<<endl;
        cout<<"(2) Restar "<<endl;
        cout<<"(3) Multiplicar "<<endl;
        cout<<"(4) Division "<<endl;
        cout<<"(5) Residuo "<<endl;
        cout<<"(6) Potencia "<<endl;
        cout<<"(7) Salir porque me da miedo la verdad"<<endl;
        cin>>op;
        switch(op){

        case 1:

            system("cls");
        if (argc == CANT_ARGS_PERMITIDOS
                && argv[2] == SUMA)
            {
                num1 = atof(argv[1]);
                num2 = atof(argv[3]);

           cout << num1 + num2 << endl;
           }
          else
         {
           cout << "Uso: <numero> + <numero>"
             << endl;
        }

            system("pause");
            break;

        case 2:

         system("cls");
            if (argc == CANT_ARGS_PERMITIDOS
                && argv[2] == RESTA)
            {
                num1 = atof(argv[1]);
                num2 = atof(argv[3]);

           cout << num1 - num2 << endl;
           }
          else
         {
           cout << "Uso: <numero> - <numero>"
             << endl;
        }
            system("pause");
            break;

        case 3:

            system("cls");
               if (argc == CANT_ARGS_PERMITIDOS
                && argv[2] == MULTIPLICACION)
            {
                num1 = atof(argv[1]);
                num2 = atof(argv[3]);

           cout << num1 * num2 << endl;
           }
          else
         {
           cout << "Uso: <numero> x <numero>"
             << endl;
        }
            system("pause");
            break;
        case 4:

            system("cls");
          if (argc == CANT_ARGS_PERMITIDOS
                && argv[2] == DIVISION)
            {
                num1 = atof(argv[1]);
                num2 = atof(argv[3]);

           cout << num1 / num2 << endl;
           }
          else
         {
           cout << "Uso: <numero> / <numero>"
             << endl;
        }
            system("pause");
            break;

        case 5:
            system("cls");
          if (argc == CANT_ARGS_PERMITIDOS
                && argv[2] == RESIDUO)
            {
                num1 = atof(argv[1]);
                num2 = atof(argv[3]);

           cout << "num1 %d num2" << endl;
           }
          else
         {
           cout << "Uso: <numero> %d <numero>"
             << endl;
        }
            system("pause");
            break;

        case 6:
            system("cls");
            if (argc == CANT_ARGS_PERMITIDOS
            && argv[2] == POTENCIA)
            {
                num1 = atof(argv[1]);
                num2 = atof(argv[3]);

           cout << "num1 ^d num2" << endl;
           }
          else
         {
           cout << "Uso: <numero> ^d <numero>"
             << endl;
         }
            system("pause");
            break;
        case 7:
        system("cls");
        cout<<"\n\n\tSaliendo... :"<<endl;
        system("pause");
        break;

        default:

        if(op<1 && op>7){
            cout<<"\n\tError algo salio mal "<<endl;
            system("pause");
        }
     break;
    }

   }while(op !=7);
}


