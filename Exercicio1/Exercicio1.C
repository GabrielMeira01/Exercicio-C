//Exercicio 1

/*Aloque uma área de memória com malloc para armazenar um número inteiro. Insira nesta área de memória o número 27 e imprima.
Incremente o numero 27 usando o ponteiro e imprima o resultado.
Desaloque o endereço alocado.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numero;
    int *ponteiro;

    ponteiro = (int*) malloc(numero);
    *ponteiro = 27;
    
    (*ponteiro)++;

    printf("%d",*ponteiro);

    free(ponteiro);
}