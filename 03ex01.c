#include<stdio.h>
#include<math.h>
#include <string.h>
#include <conio.h>

int main(){
    char selecao[10];
    char sair[10]="sair";
    char pilha[10]="pilha";
    char fila[10]="fila";
    int selecaopl, teste;
    printf ("Bem vindo ao programa de pilhas e filas!\n\n\n");
    teste = strcmp(selecao,sair);
    while(teste=!0){
        printf ("Escreva 'pilha' ou 'fila' para organizar seus dados. Digite 'sair' para encerrar o programa\n");
        fflush(stdin);
        fgets(selecao, 10, stdin);
        getchar();



        if (teste==0){
            break;
        }
        teste = strcmp(selecao,sair);
    }
    return 0;
}