#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct 
{
typedef struct
{

}
} personagem;

int SelecionarRaca(){
    int Raca;
    printf("\n1-Anao\n2-Elfo\n3-Halfling\n4-Humano\n5-Dragonato\n6-Gnomo\n7-Meio-Elfo\n8-Tiefling");

    scanf("%d",&Raca);

    return 0;
}


int main(){
    int Raca;
    printf("Bem Vindo ao D&D.\nEste programa ira lhe auxiliar na montagem de sua ficha nivel um.\nPara prosseguir, siga as seguintes instrucoes:");

    SelecionarRaca();

    return 0;
}
