#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{

    cout<<"Leudy Randy Nolasco-100576672\n\n";
    cout<<"RECUERDE QUE EL ARCHIVO SE DEBE ENCONTRAR\nEn la misma carpeta que el programa. "<<endl;
    char fichero[40];
    char linea[100];
    int i = 1;

    cout<<("\nFichero: ");
    cin>>(fichero);

    FILE *ptrCf;
    ptrCf = fopen(fichero, "r");

    if (ptrCf != NULL)
    {
        fgets(linea, 100, ptrCf);

        while(!feof (ptrCf))
        {
            cout<<("%d: %s", i++, linea);
            fgets(linea, 100, ptrCf);

            if (i % 25 == 0)
                system("PAUSE");
        }

        rewind ( ptrCf );
        fclose( ptrCf );
    }
    else
        cout<<("\nERROR\n\n");

    return 0;
}
