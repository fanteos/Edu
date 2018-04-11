#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAMANHO_DO_VETOR 7

/*
3. Crie um programa que receba um vetor V, de sete números inteiros, e um número inteiro
N e exiba o menu a seguir, com as seguintes funcionalidades:
a) 1 - Somar (V + N)
b) 2 - Subtrair (V - N)
c) 3 - Multiplicar (V * N)
d) 4 - Dividir ( V / N )
e) 5 - Elevar (V ^ N)
f) 9 - Sair do Programa

Onde:
Somar: Soma o valor N a todos os elementos de V
Subtrair : Subtrai N de todos os elementos de V
Multiplicar: Multiplica todos os valores de V por N
Dividir: Divide todos os valores de V por N
Elevar: Eleva todos os valores de V à N
Sair do Programa: Encerra o programa

Observação 1: O vetor modificado deve ser exibido depois de cada operação executada,
com exceção de "Sair do Programa".
Observação 2: Depois de executada qualquer operação, com exceção de "Sair do Programa",
o menu deve ser exibido novamente para o usuário.
Observação 3: As operações devem ser executadas sobre o vetor original informado
pelo usuário.
Observação 4: Todas as operações, com exceção de "Sair do Programa", devem ser
executadas por funções implementadas por você.
*/
//int *vet = ponteiro para o clonar_vetor_inteiro
//int tam_vet = número de elementos de vet1
//int elemento = elemento a ser somado a todos índices de vet
void somar_elemento_no_vetor(int *vet, int tam_vet, int elemento);

void subtrair_elemento_no_vetor(int *vet, int tam_vet, int elemento);
void multiplicar_vetor_por_elemento(int *vet, int tam_vet, int elemento);
void dividir_vetor_por_elemento(int *vet, int tam_vet, int elemento);
void elevar_vetor_a_elemento(int *vet, int tam_vet, int elemento);

//faz uma cópia de vet1 para vet2
void clonar_vetor_inteiro(int *vet1, int *vet2, int tam_vet);
void imprimir_menu();
void imprimir_vetor_inteiro(int *vet, int tam_vet);


int main()
{
	int N, V_original[TAMANHO_DO_VETOR], V[TAMANHO_DO_VETOR];
	int i, opcao_do_usuario;

	for(i=0;i<TAMANHO_DO_VETOR;i++)
	{
		printf("\nInforme o elemento %d do vetor V: ", i+1);
		scanf("%d", &V_original[i]);//poderia já preencher o vetor temporário
	}

	printf("\nInforme elemento N: ");
	scanf("%d", &N);

	do
	{
		imprimir_menu();
		printf("\nInforme a operacao desejada: ");
		scanf("%d", &opcao_do_usuario);

		clonar_vetor_inteiro(V_original, V, TAMANHO_DO_VETOR);

		switch(opcao_do_usuario)
		{
			case 1:
				somar_elemento_no_vetor(V, TAMANHO_DO_VETOR, N);
				printf("\nO resutado da soma de %d a V e: ", N);
				imprimir_vetor_inteiro(V, TAMANHO_DO_VETOR);
				break;

			case 2:
				subtrair_elemento_no_vetor(V, TAMANHO_DO_VETOR, N);
				printf("\nO resutado da subtracao de %d a V e: ", N);
				imprimir_vetor_inteiro(V, TAMANHO_DO_VETOR);
				break;

			case 3:
				multiplicar_vetor_por_elemento(V, TAMANHO_DO_VETOR, N);
				printf("\nO resutado da multiplicacao de V por %d e: ", N);
				imprimir_vetor_inteiro(V, TAMANHO_DO_VETOR);
				break;

			case 4:
				dividir_vetor_por_elemento(V, TAMANHO_DO_VETOR, N);
				printf("\nO resutado da divisao de V por %d e: ", N);
				imprimir_vetor_inteiro(V, TAMANHO_DO_VETOR);
				break;

			case 5:
				elevar_vetor_a_elemento(V, TAMANHO_DO_VETOR, N);
				printf("\nO resultado da elevacao de V a %d e:", N);
				imprimir_vetor_inteiro(V, TAMANHO_DO_VETOR);
				break;

			case 9:
				printf("\nEncerrando o programa.");
				break;

			default:
				printf("\nOpcao nao reconhecida, verifique o codigo informado.");
				break;


		}
	}while(opcao_do_usuario != 9);


	printf("\n\n");
	return 0;
}


void somar_elemento_no_vetor(int *vet, int tam_vet, int elemento)
{
	int i;
	for(i=0;i<tam_vet;i++)
		vet[i]+=elemento;
}
void subtrair_elemento_no_vetor(int *vet, int tam_vet, int elemento)
{
	int i;
	for(i=0;i<tam_vet;i++)
		vet[i]-=elemento;
}
void multiplicar_vetor_por_elemento(int *vet, int tam_vet, int elemento)
{
	int i;
	for(i=0;i<tam_vet;i++)
		vet[i]*=elemento;
}
void dividir_vetor_por_elemento(int *vet, int tam_vet, int elemento)
{
	int i;
	for(i=0;i<tam_vet;i++)
		vet[i]/=elemento;
}
void elevar_vetor_a_elemento(int *vet, int tam_vet, int elemento)
{
	int i;
	for(i=0;i<tam_vet;i++)
		vet[i]=pow(vet[i], elemento);
}
void clonar_vetor_inteiro(int *vet1, int *vet2, int tam_vet)
{
	int i;

	for(i=0;i<tam_vet;i++)
		vet2[i]=vet1[i];
}
void imprimir_menu()
{
	printf("\n\nSelecione uma das opcoes abaixo:");

	printf("\n1 - Somar (V+N)");
	printf("\n2 - Subtrair (V-N)");
	printf("\n3 - Multiplicar (V*N)");
	printf("\n4 - Dividir (V/N)");
	printf("\n5 - Elevar (V^N)");
	printf("\n\n9 - Sair do Programa\n");
}
void imprimir_vetor_inteiro(int *vet, int tam_vet)
{
	int i;
	for(i=0;i<tam_vet;i++)
		printf("%d ", vet[i]);
}
