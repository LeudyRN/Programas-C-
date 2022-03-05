#include <iostream>
using namespace std;

int main() {
    long fibonacci(long),n, t1 = 0, t2 = 1, t3 = 0;
    cout<< "LEUDY RANDY NOLASCO - 100576672\n\n"<<endl;
    cout << "Ingrese la cantidad de numeros a imprimir: ";
    cin >> n;

    cout << "Fibonacci Series: "<<endl;

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;

        cout << t3 << ", ";
    }
    return 0;
}
