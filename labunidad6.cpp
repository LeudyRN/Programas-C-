#include <iostream>
#include <string>

using namespace std;

void concatena(string* c1, string* c2);

int main()
{

    cout<<"Leudy Randy Nolasco-100576672\n\n"<<endl;
    string cadena1, cadena2;

    cout<<"\nCadena 1: "; getline(cin, cadena1);
    cout<<"Cadena 2: "; getline(cin, cadena2);

    concatena(&cadena1, &cadena2);

    cout<<endl;

    return 0;
}

void concatena(string* c1, string* c2)
{
    *c1 = *c1 + *c2;

    cout << endl << *c1;
}
