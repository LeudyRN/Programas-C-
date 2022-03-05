//programa para jugar piedra papel o tigera
#include <iostream>
#include <ctime>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

int Comprobar(int PC, int User);

int  main(){
    int op;

    do{
    system("cls");
    int UserPlayer, PC_Player;
    char elemento[3][16] = { "PIEDRA", "PAPEL", "TIJERA" };
    char resultado[3][9] = { "EMPATE", "PERDISTE", "GANASTE" };
    cout<<"LEUDY RANDY NOLASCO - 100576672"<<endl;
    printf("Bienvenido al juego virtual de Piedra, papel o tijera. ");
    printf("Elija una opcion:\n (1) Piedra\n (2) Papel\n (3) Tijera\n");

    printf("\n\nIngrese su jugada: ");
    scanf("%d", &UserPlayer);

    srand(time(NULL));
    PC_Player = rand()%3;

    printf("\nLa maquina eligio %s y tu %s ->", elemento[PC_Player],
                                                elemento[UserPlayer-1]);
    printf("%s\n", resultado[Comprobar(PC_Player, UserPlayer-1)]);
    system("pause");

    }while (op !=3);
    return 0;
}

int Comprobar(int PC, int User)
{
    int MapJuego[3][3] = { {0, 2, 1},
                           {1, 0, 2},
                           {2, 1, 0}
                         };

   return MapJuego[PC][User];
}
