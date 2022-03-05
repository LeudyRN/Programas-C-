#include <iostream>

using namespace std;

int main(){

    cout<<"Leudy Randy Nolasco-100576672\n\n"<<endl;

    cout<<"Muy divertido todo\n\n"<<endl;

    int a, b, c;

    cout << "\nPrimer lado: "; cin >> a;
    cout << "Segundo lado: "; cin >> b;
    cout << "Tercer lado: "; cin >> c;

    if (a == b == c)
        cout << "\nEs un triangulo Equilatero" << endl;
    else if (a == b || a == c || b == c)
        cout << "\nEs un triangulo Isosceles" << endl;
    else
        cout << "\nEs un triangulo Escaleno" << endl;

    return 0;
}
