#include <stdio.h>
#include <stdlib.h>


/*
1. Escreva um programa que receba o código de rastreio de uma encomenda e defina
de qual estado a encomenda saiu, de acordo com a lista a seguir; o programa deverá possuir uma função chamada
rastrear_encomenda, que receberá o código de rastreio e imprimirá na tela a região de origem da encomenda.
a) 1 - Maranhão
b) 2 - Piauí
c) 3 - Ceara
d) 4 - Bahia
e) 5 ou 6 - Sergipe
f) 7, 8 ou 9 - Alagoas
g) C.C. - Não Cadastrado
*/


void rastrear_encomenda(int codigo);

int main()
{
	int codigo_rastreio;
	int codigo_rastreamento_nivel1;

	printf("\nInforme o codigo para rastrear o estado de origem da encomenda: ");
	scanf("%d", &codigo_rastreio);
	rastrear_encomenda(codigo_rastreio);

	printf("\n\n");
	return 0;
}

void rastrear_encomenda(int codigo)
{
	printf("\nLocalide de origem: ");
	switch(codigo)
	{
		case 1:
			printf("Maranhao");
			break;

		case 2:
			printf("Piaui");
			break;

		case 3:
			printf("Ceara");
			break;

		case 4:
			printf("Bahia");
			break;

		case 5:
		case 6:
			printf("Sergipe");
			break;

		case 7:
		case 8:
		case 9:
			printf("Alagoas");
			break;

		default:
			printf("Nao Cadastrada");
			break;
	}//fim do switch
}
