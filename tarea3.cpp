#include<iostream>

using namespace std;

int main(){
    const int TAMANO = 30;
    char nombre [TAMANO];
    int edad;

    cout<<"Inicio de datos" <<endl<<endl;
    cout<<"Edad : ";
    cin>>edad;
    cin.ignore();
    cout<<"Nombre : ";
    cin.getline(nombre, TAMANO);

    cout<<"\n\nHola "<<nombre<<endl;
    cout<<"\nUsted cuenta con la edad de "<<edad<<endl;

return 0;
}
