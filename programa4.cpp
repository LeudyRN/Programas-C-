#include <iostream>
#include <iomanip>


using namespace std;

int main() {


    cout<<"Leudy Randy Nolasco-100576672\n\n"<<endl;
    cout<<"***********BIENVENIDOS A LEAGUE OF DRAVEN!***********\n\n"<<endl;
    cout<<"********VER ARCANE EN NETFLIX.COM**********\n\n"<<endl;

	double suma=0,promedio=0;
	double sueldo;
	int i;
	double mayor = 0;
	int mayores;


	for (i=1; i<=10; i++) {

		cout << "Ingrese sueldo:\n\n ";
		cin >> sueldo;

		suma = suma + sueldo;

		if (sueldo > 7000) {
            mayores++;
            promedio = suma / 10;

        }

        if(sueldo>mayor){
             mayor=sueldo;
        }

	}

    cout << fixed << setprecision(2);
	cout << "Suma de todos los sueldos: " << suma << endl;
	cout << "Promedio de los sueldos: " << promedio << endl;
	cout << "El sueldo mas alto es: " <<mayor <<endl;
	cout << "Sueldos mayores a 7000: " <<mayores <<endl;

    return 0;
}


