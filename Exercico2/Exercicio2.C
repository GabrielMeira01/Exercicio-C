//Exercicio 2

/*Aloque 5 áreas de memória com malloc para armazenar 5 números inteiro, cada alocação deve ser colocada em um vetor de ponteiros
int *vet[5];
Imprima os valores usando o vetor de ponteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *ponteiro, i;

    ponteiro = (int *) malloc(5 * sizeof(int));

    for(i = 0; i < 5; i++){
        printf("Digite um numeoro o indice [%d]: \n", i);
        scanf("%d", &ponteiro[i]);
    }

    for(i = 0; i < 5; i++){
        printf("valor armazenado na posicao [%d]: %d\n", i, ponteiro[i]);
    }
    
    free(ponteiro);
}