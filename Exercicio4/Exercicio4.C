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
	printf("endereço comercial 2: %s\n", &PonteiroCadastro->Comercial.Endereco); 
	printf("cep comercial: %s\n", &PonteiroCadastro->Comercial.Cep); 

    free(PonteiroCadastro);
}