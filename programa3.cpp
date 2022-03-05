#include<iostream>

using namespace std;

int main(){
    int numero;
    do{
        cout<<"Leudy Randy Nolasco/100576672\n\n";
        cout<<"Como que alguien no se aprendio la tabla\nDigita un numero entre 1 y 12: ";
        cin>>numero;
        if(numero<1 || numero>12){
            std::cout<<"Respete que es del 1 al 12 webon.\n";
        }
    }while(numero<1 || numero>12);
    cout<<"\n\n";
    for (int i = 1; i <= 12; i++)
    {
        cout<<i<<" x "<<numero<<"="<<i*numero<<"\n";
    }

    system("pause");
    return 0;
}
