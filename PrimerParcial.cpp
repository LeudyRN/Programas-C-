#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void getMultiplo();
int getContador();
int getFacturas();
int getItador();

int main(){
   int op;

   do {
    system("cls");
    cout<<"(1) Calcular Multiplo de 5. "<<endl;
    cout<<"(2) Contador de numeros primos. "<<endl;
    cout<<"(3) Factura. "<<endl;
    cout<<"(4) Itador. "<<endl;
    cout<<"(5) Presione para salir"<<endl;
    cin>>op;
    switch(op){
    case 1:
        system("cls");
        //cout<<"opcion 1"endl;
        getMultiplo();
        system("pause");
        break;

    case 2:
        system("cls");
        //cout<<"opcion 2"endl;
        getContador();
        system("pause");
        break;

    case 3:
        system("cls");
        //cout<<"opcion 3"endl;
        getFacturas();
        system("pause");
        break;

    case 4:
        system("cls");
        //cout<<""opcion 4"endl;
        getItador();
        system("pause");
        break;

    case 5:
        system("cls");
        cout<<"\n\n\tSaliendo... :"<<endl;
        system("pause");
        break;
    default:
        if(op<1 && op>5){
            cout<<"\n\tError algo salio mal "<<endl;
            system("pause");
        }
     break;
    }

   }while(op !=5);
}

 void getMultiplo(){
	int n,multiplo;
	cout<<"Ingrese el numero para ver su multiplo de 5: "<<endl;
	cin>>n;
	multiplo = n * 5;
	cout<<"su multiplo  es: "<<multiplo<<endl;
}
int getContador(){

    cout<<"Los numeros primos del 30 al 300: "<<endl;

    for (int i=30; i<300; i++)
    {

        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime) cout << i << " ";
    }

}

 int getFacturas(){

   {
    struct
    {
        long factNumero;
        string  factCliente;
        string   factFecha;
        double factMonto;
        double factDescuento;
        double factNeto;
    } factura;

    cout << "Escribe El numero de factura ";
    cin >> factura.factNumero;
    cin.ignore();
    cout << "Escribe El nombre del cliente ";
    cin >> factura.factCliente;
    cin.ignore();
    cout << "Escribe la fecha de la factura ";
    cin >> factura.factFecha;
    cin.ignore();
    cout << "Escribe El monto de la factura ";
    cin >> factura.factMonto;
    cin.ignore();

    if(factura.factMonto>=20000 && factura.factMonto<30000){
        factura.factDescuento = factura.factMonto*0.07;
    }else if(factura.factMonto>=30000 && factura.factMonto<50000){
        factura.factDescuento = factura.factMonto*0.1;
    }else if(factura.factMonto>=50000){
        factura.factDescuento = factura.factMonto*0.14;
    }else{
        factura.factDescuento = 0;
    }
    factura.factNeto = factura.factMonto-factura.factDescuento;

    cout<<"El numero de la factura es: " <<factura.factNumero<<endl;
    cout<<"El nombre del cliente es: "<<factura.factCliente<<endl;
    cout<<"La fecha es: "<<factura.factFecha<<endl;
    cout<<"El precio a pagar es: "<<factura.factNeto<<endl;
   }
}
int getItador(){
string nombre;
    cout<<"Digite su nombre: "; cin>>nombre;
    string::iterator ite = nombre.begin();

    while (ite != nombre.end())
    {
        cout << *ite << endl;
        ite++;
    }
}
