#include<stdio.h>
#include<math.h>
#include <string.h>
#include <conio.h>

int fatorial(int valor){
    if (!valor){
        return 1;
    }
    else{
        return valor*fatorial(valor-1);
    }
}

int main(){
    int valor;
    printf ("Digite o valor para descobrir seu fatorial\n");
    scanf("%i", &valor);
    printf ("O seu valor de fatorial e: %i", fatorial(valor));
    return 0;
}