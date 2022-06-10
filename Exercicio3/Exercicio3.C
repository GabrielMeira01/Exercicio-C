//Exercicio 3

/*Aloque uma área de memória com malloc para armazenar uma struct com nome e telefone (ambos vetor de char). 
Preencha os dados usando struct.
Imprima os dados.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct CADASTRO{
    char nome[50];
    char telefone[10];
};

int main(){
    CADASTRO *ponteiro;
    ponteiro = (struct CADASTRO *) malloc(sizeof(struct CADASTRO));

    strcpy(ponteiro->nome,"Gabriel");
    strcpy(ponteiro->telefone, "912341234");

    printf("Nome: %s\n",ponteiro->nome);
    printf("Telefone: %s\n",ponteiro->telefone);
}
