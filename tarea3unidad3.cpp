#include <iostream>
using namespace std;

int main()
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



    return 0;
}
