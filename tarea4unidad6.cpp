#include <iostream>

using namespace std;

int* reverso(const int v[], int n);

int main()
{
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = reverso(v, 10);
    cout<<"Leudy Randy Nolasco-100576672\n\n";

    for (int i = 0; i < 10; i++)
        cout << ptr[i] << " ";

    return 0;
}

int* reverso(const int v[], int n)
{
    int* rev = new int[n];

    int k = n - 1;
    for (int i = 0; i < n; i++)
        rev[i] = v[k--];

    return rev;
}
