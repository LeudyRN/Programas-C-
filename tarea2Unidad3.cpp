#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    string nombre;
    cout<<"Digite su nombre: "; cin>>nombre;
    string::iterator ite = nombre.begin();

    while (ite != nombre.end())
    {
        cout << *ite << endl;
        ite++;
    }

    return 0;
}
