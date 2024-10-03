#include<stdio.h>
#include<math.h>
#include <string.h>
#include <conio.h>

void inserir(int banco, int tam, int tammax){
    if (tam<tammax){
        printf ("Este e o %i elemento, insira o numero\n", tam);
        scanf ("%i", &banco);
        tam++;
        tam=tam+1;
    }
    else {
        printf ("Banco de dados lotado");
    }
}

void remover(int numero, int numeromax, int banco[numeromax]){
    banco[numero]=0;
    for (numero;numero<numeromax;numero++){
        banco[numero]=banco[numero++];
    }
}

void vazio(int tam){
    if (tam==0){
        printf ("O banco de dados esta vazio");
    }
    else{
        printf ("Nao esta vazio");
    }
}

void cheio(int tam, int tammax){
    if (tam==tammax){
        printf ("O banco de dados esta cheio");
    }
    else {
        printf ("Ainda nao esta cheio");
    }
}

int main(){
    int selecaopf=0, selecaop=0, selecaof=0, tampilha=1, tamfila=0, pilha[1000], fila[1000], tammaxpilha, tammaxfila, remocaop;
    char ayuda;
    system ("CLS");
    printf ("Bem vindo ao programa de pilhas e filas!\n\n\n");
    while(selecaopf!=3){
        printf ("Menu Inicial\n\nEscreva 1 para pilha ou 2 para fila para organizar seus dados. \nDigite 3 sair para encerrar o programa\n");
        scanf ("%i", &selecaopf);
        system ("CLS");
        if (selecaopf==1){
            while(selecaop!=7){
                printf ("Digite o numero para a funcao \n1-Insercao de elementos \n2-Remocao de elementos \n3-Exibicao da fila \n4-Verificar se a fila esta cheia ");
                printf ("\n5-Verificar se a fila esta vazia \n6-Localizar um elemento \n7-Para voltar ao menu inicial\n");
                scanf ("%i", &selecaop);
                system ("CLS");
                switch (selecaop) {
                case 1:
                    if (tampilha==1){
                        printf ("Antes de comecar a inserir elementos na pilha, escreva quantos elementos a pilha tera no total\n");
                        scanf ("%i", &tammaxpilha);
                }
                    inserir (pilha[tampilha], tampilha, tammaxpilha); // Nao aumenta o tampilha
                //    if (tampilha<tammaxpilha){
                //        printf ("Este e o %i elemento, insira o numero\n", (tampilha+1));
                //        scanf ("%i", &pilha[tampilha]);
                //        tampilha++;
                //    }
                //    else {
                //        printf ("Banco de dados lotado");
                //    }
                    system ("CLS");
                    printf ("\n\nTampilha %i\n\n", tampilha);
                    break;
                case 2:
                    printf ("Qual o numero da posicao do elemento que quer tirar?");
                    scanf ("%i", &remocaop);
                    remover(remocaop, tammaxpilha, pilha[tammaxpilha]);
                    break;
                case 4:
                    cheio (tampilha,tammaxpilha);
                    break;
                case 5:
                    vazio (tampilha);
                    break;
                default:
                    printf ("Número digitado sem funcoes, aperte ENTER para voltar ao menu inicial tente novamente");
                    scanf("%c",&ayuda);
                    system("CLS");
                }
            }
        }
        if (selecaopf==2){
            while(selecaof!=6){
                printf ("Digite o número para a funcao \n1-Insercao de elementos \n2-Remocao de elementos \n3-Exibir o elemento no topo \n4-Verificar se a fila esta cheia ");
                printf ("\n5-Verificar se a fila esta vazia \n6-Para voltar ao menu inicial\n");
                scanf ("%i", &selecaof);
                system("CLS");
                switch (selecaof) {
                case 1:
                    if (tamfila==0){
                        printf ("Antes de começar a inserir elementos na fila, escreva quantos elementos a fila terá no total\n");
                       scanf ("%i", &tammaxfila);
                    }
                    inserir(fila[tamfila], tamfila, tammaxfila);
                    break;
                case 2:
                    
                    break;
                case 3:
                    break;
                case 4:
                    cheio (tamfila, tammaxfila);
                    break;
                case 5:
                    vazio (tamfila);
                    break;
                case 6:
                    break;
                default:
                    printf ("Número digitado sem funcoes, aperte ENTER para voltar ao menu inicial tente novamente");
                    scanf("%c",&ayuda);
                    system("CLS");
                    break;
                }
            }
        } 
        if (selecaopf==3){
            break;
        }
        if (selecaopf<1 || selecaopf>3) {
            printf ("Numero digitado sem funcoes, aperte ENTER para voltar ao menu inicial tente novamente\n");
            fflush(stdin);
            fgets(ayuda, 1, stdin);
            //system("CLS");
        }
    }
    return 0;
}