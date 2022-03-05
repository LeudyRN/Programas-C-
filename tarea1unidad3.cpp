#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char numeros[] = {'1','2','3','4','5','6','7','8','9','0'};
    char mayusculas[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char minusculas[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char puntuacion[] = {'.',',',';','(',')','[',']','-','¿','?','!','¡',':','"'};
    //string cadena;
    int contN  = 0;
    int contLM  = 0;
    int contLm = 0;
    int contP  = 0;
    int longitud = 0;
    char cadena2[100];
    cout<<"Hola, bienvenido al programa que cuenta caracteres\n";
    cout<<"Dame una cadena: ";
    cin.getline(cadena2,100);
    longitud =  strlen(cadena2);
    cout<<"La cadena es: "<<cadena2<< endl;

    for(int i=0; i<longitud; i++){
        for(int j=0;j<strlen(numeros); j++){
            if(cadena2[i]==numeros[j]){
                contN+=1;
                break;
            }
        }
        for(int j=0;j<strlen(mayusculas); j++){
            if(cadena2[i]==mayusculas[j]){
                contLM+=1;
                break;
            }
        }
        for(int j=0;j<strlen(puntuacion); j++){
            if(cadena2[i]==puntuacion[j]){
                contP+=1;
                break;
            }
        }
        for(int j=0;j<strlen(minusculas); j++){ //este es para minusculas
            if(cadena2[i]==minusculas[j]){
                contLm+=1;
                break;
            }
        }
    }
    cout << "La cantidad de numeros es: "<<contN<< endl;
    cout << "La cantidad de mayusculas es: "<<contLM<< endl;
    cout << "La cantidad de minusculas es: "<<contLm<< endl;
    cout << "La cantidad de signos de puntuacion es: "<<contP-contLm<< endl;

  return 0;

}
