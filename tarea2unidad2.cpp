#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int contador = 30;
    const unsigned int LIMITE = 300;

    while (++contador <= LIMITE)
    {
        if (contador % 3 == 0)
            continue;

        cout << "Contador: " << contador << endl;
    }

    cout << "Fin del programa." << endl;

    return 0;
}
