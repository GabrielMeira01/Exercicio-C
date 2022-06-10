//Exercicio 5

/*Crie duas structs, uma estática e outra dinâmica com os seguintes campos 
Quantidade;
Descrição do produto;
Valor Unitário;
Preencha a struct estática com scanf;
Aloque a struct dinâmica
Copie os dados a struct estática para a dinâmica;
Imprima a struct dinâmica.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct PRODUTO{
    int quantidade;
    char descricao[100];
    float valorUnitario;
};

int main(){
    PRODUTO structEstatica, *structDinamica;
    structDinamica = (struct PRODUTO *) malloc(sizeof(PRODUTO));

    printf("Digite a quantidade: ");
    scanf("%d", &structEstatica.quantidade);

    printf("Digite a descricao do produto: ");
    scanf(" %[^\n]", &structEstatica.descricao);

    printf("Digite o valor do produto: ");
    scanf("%f", &structEstatica.valorUnitario);

    if (structDinamica){
        memcpy(structDinamica, &structEstatica, sizeof(PRODUTO));
        printf("quantidade dinamica: %d\n", structDinamica->quantidade);
        printf("descricao dinamica: %s\n", structDinamica->descricao);
        printf("valor dinamica: %.2f\n", structDinamica->valorUnitario);
    }
}