#include <stdio.h>
#include <stdlib.h>

//Crie um programa que receba um nome de uma pessoa, com no máximo quinze caracteres,
//e o imprima na tela.

int main()
{
	char nome[15];

	//gets(nome);
	//scanf("%s", nome);
	fgets(nome, 15, stdin);

	//puts(nome);
	printf("%s", nome);

	printf("\n\n");
	return 0;
}
