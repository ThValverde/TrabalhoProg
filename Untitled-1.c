#include <stdio.h>

int SelecionarClasse(){
    int Classe;
    printf("\n1-Anao\n2-Elfo\n3-Halfling\n4-Humano\n5-Dragonato\n6-Gnomo\n7-Meio-Elfo\n8-Tiefling");

    scanf("%d",&Classe);

    return 0;
}


int main(){
    int Classe;
    printf("Bem Vindo ao D&D");
    SelecionarClasse();

    return 0;
}