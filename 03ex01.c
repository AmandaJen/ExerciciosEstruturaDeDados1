#include<stdio.h>
#include<math.h>
#include <string.h>
#include <conio.h>

//void inserir(int banco, int tam, int tammax){
//    if (tam<tammax){
//        printf ("Este e o %i elemento, insira o numero\n", tam);
//        scanf ("%i", &banco);
//        tam++;
//        tam=tam+1;
//    }
//    else {
//        printf ("Banco de dados lotado");
//    }
//}

//void remover(int numero, int numeromax, int banco[numeromax]){
//    banco[numero]=0;
//    for (numero;numero<numeromax;numero++){
//        banco[numero]=banco[numero++];
//    }
//}

void vazio(int tam){
    if (tam==1){
        printf ("O banco de dados esta vazio\n\n\n");
    }
    else{
        printf ("Nao esta vazio\n\n\n");
    }
}

void cheio(int tam, int tammax){
    if (tam>tammax){
        printf ("O banco de dados esta cheio\n\n\n");
    }
    else {
        printf ("Ainda nao esta cheio\n\n\n");
    }
}

int main(){
    int selecaopf=0, selecaop=0, selecaof=0, tampilha=1, tamfila=1, pilha[1000], fila[1000], tammaxpilha=10, tammaxfila=10, remocaop=5, remocaof=1, procura, procuraf, Verdfalso;
    char ayuda;
    system ("CLS");
    printf ("Bem vindo ao programa de pilhas e filas!\n\n\n");
    while(selecaopf!=3){
        printf ("Menu Inicial\n\nEscreva 1 para pilha ou 2 para fila para organizar seus dados. \nDigite 3 sair para encerrar o programa\n");
        scanf ("%i", &selecaopf);
        system ("CLS");
        if (selecaopf==1){
            while(selecaop!=6){
                printf ("Menu de Pilhas\n\nDigite o numero para a funcao \n1-Insercao de elementos \n2-Remocao de elementos \n3-Ver o elemento do topo");
                printf ("\n4-Verificar se a pilha esta cheia \n5-Verificar se a pilha esta vazia \n6-Para voltar ao menu inicial\n");
                scanf ("%i", &selecaop);
                system ("CLS");
                switch (selecaop) {
                case 1:
                    if (tampilha==1){
                        printf ("Antes de comecar a inserir elementos na pilha, escreva quantos elementos a pilha tera no total\n");
                        scanf ("%i", &tammaxpilha);
                }
                //    inserir (pilha[tampilha], tampilha, tammaxpilha); // Nao aumenta o tampilha
                    if (tampilha<=tammaxpilha){
                        printf ("Este e o %i elemento, insira o numero\n", (tampilha));
                        scanf ("%i", &pilha[tampilha]);
                        tampilha++;
                    }
                    else {
                        printf ("Banco de dados lotado");
                        printf ("Número digitado sem funcoes, aperte ENTER para voltar ao menu inicial tente novamente");
                        scanf("%c",&ayuda);
                        //colocar algo para impedir o continuamento
                    }
                    system ("CLS");
                    break;
                case 2:
                    printf ("Qual o numero da posicao do elemento que quer remover?\n");
                    scanf ("%i", &remocaop);
                    //remover(remocaop, tammaxpilha, pilha[tammaxpilha]);
                    pilha[remocaop]=0;
                    for (remocaop=remocaop;remocaop<tammaxpilha;remocaop++){
                        pilha[remocaop]=pilha[(remocaop+1)];
                    }
                    tampilha--;
                    break;
                case 3: //exibir elemento do topo
                    printf ("O elemento do topo e: %i",pilha[(tampilha-1)]);
                    break;
                case 4:
                    cheio (tampilha,tammaxpilha);
                    break;
                case 5:
                    vazio (tampilha);
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
        if (selecaopf==2){
            while(selecaof!=7){
                printf ("Menu de Filas\n\nDigite o número para a funcao \n1-Insercao de elementos \n2-Remocao de elementos \n3-Exibicao da fila ");
                printf ("\n4-Verificar se a fila esta cheia \n5-Verificar se a fila esta vazia \n6-Localizar um elemento \n7-Para voltar ao menu inicial\n\n");
                scanf ("%i", &selecaof);
                system("CLS");
                switch (selecaof) {
                case 1:
                    if (tamfila==1){
                        printf ("Antes de começar a inserir elementos na fila, escreva quantos elementos a fila terá no total\n");
                       scanf ("%i", &tammaxfila);
                    }
                    if (tamfila<tammaxfila){
                        printf ("Este e o %i elemento, insira o numero\n", (tamfila));
                        scanf ("%i", &fila[tamfila]);
                        tamfila++;
                    }
                    else {
                        printf ("Banco de dados lotado");
                    }
                    break;
                case 2:
                    for (remocaof=1;remocaof<tamfila;remocaof++){
                        fila[remocaof]=fila[(remocaof+1)];
                    }
                    fila[tamfila]=0;
                    tamfila--;
                    break;
                case 3:
                    printf ("A exibicao da fila por posicao:\n");
                    for (procuraf=1;procuraf<=tamfila;procuraf++){
                        printf ("%i- %i\n",procuraf, fila[procuraf]);
                    }
                    break;
                case 4:
                    cheio (tamfila, tammaxfila);
                    break;
                case 5:
                    vazio (tamfila);
                    break;
                case 6:
                    printf ("Digite o elemento que quer encontrar\nNumero:");
                    scanf ("%i", &procuraf);
                    for (procura=1;procura<=tamfila;procura++){
                        if(fila[procura]==procuraf){
                            Verdfalso=1;
                        }
                    }
                    if (Verdfalso==1){
                        printf ("Foi encontrado na(s) posicao(oes):");
                        for (procura=1;procura<=tamfila;procura++){
                            if(fila[procura]==procuraf){
                                printf ("%i ", procura);
                            }
                        }
                        printf ("\n\n\n");
                    }
                    else{
                        printf("Nao foi encontrado esse numero\n\n\n");
                    }
                    break;
                default:
                    printf ("Número digitado sem funcoes, tente novamente\n\n\n");
                    system("CLS");
                    break;
                }
            }
        } 
        if (selecaopf==3){
            break;
        }
        if (selecaopf<1 || selecaopf>3) {
            printf ("Numero digitado sem funcoes, tente novamente\n\n\n");
            //system("CLS");
        }
    }
    return 0;
}