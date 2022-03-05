#include <iostream>

using namespace std;

double *creaArreglo(double v[], int n);
void leePuntuaciones(double v[], int n);
void ordenar(double v[], int n);
double calculaPromedio(double v[], int n);

int main()
{
    int sz;
    cout<<"Leudy Randy Nolasco-100576672\n\n ";
    cout << "\nNumero de Puntuaciones: ";
    cin >> sz;

    double* v = new double[sz];

    creaArreglo(v, sz);
    leePuntuaciones(v, sz);

    cout << "\nArreglo ordenado: ";
    ordenar(v, sz);

    cout << "\nPromedio: " << calculaPromedio(v, sz) << endl;

    delete [] v;

    return 0;
}

double *creaArreglo(double v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nPuntuacion " << i + 1 << ": ";
        cin >> v[i];
    }
}

void leePuntuaciones(double v[], int n)
{
    double valor;
    int j;

    for (int i = 1; i < n; i++)
    {
        valor = v[i];
        j = i;
        while (j > 0 && valor < v[j-1])
        {
            v[j] = v[j-1];
            j--;
        }
        v[j] = valor;
    }
}

void ordenar(double v[], int n)
{
    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
}

double calculaPromedio(double v[], int n)
{
    double suma = 0.0f;

    for (int i = 0; i < n; i++)
        suma += v[i];

    return suma / n;
}
