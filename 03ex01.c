#include<stdio.h>
#include<math.h>
#include <string.h>
#include <conio.h>

int main(){
    int selecaopl=0;
    char ayuda;
    printf ("Bem vindo ao programa de pilhas e filas!\n\n\n");
    while(selecaopl=!3){
        printf ("Escreva 1 para pilha ou 2 para fila para organizar seus dados. \nDigite 3 sair para encerrar o programa\n");
        scanf ("%n",&selecaopl);
        if (selecaopl==1){

        }
        if (selecaopl==2){

        } 
        if (selecaopl==3){
            break;
        }
        if (selecaopl<1 && selecaopl>3) {
            printf ("Número digitado sem funcoes, aperte qualquer tecla para voltar ao menu inicial tente novamente");
            scanf("%c",&ayuda);
            system("CLS");
        }
    }
    return 0;
}