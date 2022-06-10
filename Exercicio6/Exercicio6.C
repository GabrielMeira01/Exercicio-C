//Exercicio 6

/*Crie um programa em C que preencha 5 structs CADASTRO com nome e telefone usando scanf, cada endereço retornado pelo malloc será armazenado em um vetor de ponteiros.
struct CADASTRO *vet[5];*/

#include<stdio.h>
#include<stdlib.h>

struct CADASTRO{
    char nome[50];
    char telefone[10];
};

int main(){
    CADASTRO *p;
    p = (struct CADASTRO *) malloc(5 * sizeof(CADASTRO));

    if(p){
        for(int i=1; i <= 5; i++){
            printf("Digite o nome %d \n",i);
            scanf(" %[^\n]", &p[i].nome);
            printf("Digite o telefone %d \n",i);
            scanf(" %[^\n]", &p[i].telefone);

        }
        for(int i=1; i <= 5; i++){
            printf("nome: %s\n", p[i].nome);
            printf("telefone: %s\n", p[i].telefone);
            printf("-----------------------\n");
        }      
    }
    free(p);
}