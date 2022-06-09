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

//Exercicio 3

/*Aloque uma área de memória com malloc para armazenar uma struct com nome e telefone (ambos vetor de char). 
Preencha os dados usando struct.
Imprima os dados.*/

#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[50];
    char telefone[10];
}CADASTRO;

int main(){
    CADASTRO *ponteiro;
    ponteiro = malloc(sizeof(CADASTRO));

    strcpy(ponteiro->nome,"Gabriel");
    strcpy(ponteiro->telefone, "912341234");

    printf("%s\n",ponteiro->nome);
    printf("%s\n",ponteiro->telefone);
}

//Exercicio 4

/*Crie um programa em C que preencha uma struct CADASTRO com duas subtructs ENDERECO (comercial e residencial) usando scanf, depois do preenchimento imprima todo seu conteúdo.
 Sem alocação estática, apenas ponteiros e malloc.*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>

struct ENDERECO
{
	char Endereco [50];
	char Cep[15];
};
	
struct CADASTRO
{
	char Nome [50];
	struct ENDERECO Residencial;
	struct ENDERECO Comercial;
};
	
	
int main(void)
{
	struct CADASTRO *PonteiroCadastro;
	PonteiroCadastro = (struct CADASTRO *) malloc(sizeof(struct CADASTRO));
	
	printf("Digite seu nome: ");
	scanf(" %[^\n]", PonteiroCadastro->Nome); 

	printf("Digite seu endereço residencial: ");
	scanf(" %[^\n]", PonteiroCadastro->Residencial.Endereco); 

	printf("Digite seu cep residencial: ");
	scanf(" %[^\n]", PonteiroCadastro->Residencial.Cep); 	
	
	printf("Digite seu endereço comercial: ");
	scanf(" %[^\n]", PonteiroCadastro->Comercial.Endereco); 

	printf("Digite seu cep comercial: ");
	scanf(" %[^\n]", PonteiroCadastro->Comercial.Cep);
	
	printf("nome: %s\n", &PonteiroCadastro->Nome); 
	printf("endereço residencial: %s\n", &PonteiroCadastro->Residencial.Endereco); 
	printf("cep residencial: %s\n", &PonteiroCadastro->Residencial.Cep); 
	printf("endereço comercial: %s\n", &PonteiroCadastro->Comercial.Endereco); 
	printf("cep comercial: %s\n", &PonteiroCadastro->Comercial.Cep); 

    free(PonteiroCadastro);
}

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

typedef struct{
    int quantidade;
    char descricao[100];
    float valorUnitario;
}PRODUTO;

int main(){
    PRODUTO structEstatica, *structDinamica;
    structDinamica = (struct PRODUTO *) malloc(sizeof(PRODUTO));

    printf("Digite a quantidade: ");
    scanf("%d", &structEstatica.quantidade);

    printf("Digite a descricao do produto: ");
    scanf(" %[^\n]", &structEstatica.descricao);

    printf("Digite o valor do produto: ");
    scanf("%f", &structEstatica.valorUnitario);

    printf("quantidade estatica: %d\n", structEstatica.quantidade);
    printf("descricao estatica: %s\n", structEstatica.descricao);
    printf("valor estatica): %f\n", structEstatica.valorUnitario);

    if (structDinamica){
        memcpy(structDinamica, &structEstatica, sizeof(PRODUTO));
        printf("quantidade dinamica: %d\n", structDinamica->quantidade);
        printf("descricao dinamica: %s\n", structDinamica->descricao);
        printf("valor dinamica: %.2f\n", structDinamica->valorUnitario);
    }
}

//Exercicio 6

/*Crie um programa em C que preencha 5 structs CADASTRO com nome e telefone usando scanf, cada endereço retornado pelo malloc será armazenado em um vetor de ponteiros.
struct CADASTRO *vet[5];*/

#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[50];
    char telefone[10];
}CADASTRO;

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
            printf("%s", p[i].nome);
            printf("%s\n", p[i].telefone);
        }      
    }
    free(p);
}
