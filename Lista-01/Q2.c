#include <stdio.h>
#include <stdlib.h>
#include <float.h>

//Escreva um programa que receba dez notas de alunos e imprima a maior nota, a menor
//nota e a média da turma. Utilize o comando for como laço para receber as diversas notas.


int main()
{
	float maior, menor, total, atual;
	//float notas[10];
	int i;

	maior = -1.0*FLT_MAX;
	menor = FLT_MAX;
	total = 0.0;

	printf("\nMenor: %f\nMaior: %f\n\n", menor, maior);
	for(i=0;i<10;i++)
	{
		//recebendo a entrada, uma por vez
		printf("\nInforme a nota %d: ", i+1);
		scanf("%f", &atual);
		//scanf("%f", &notas[i]);

		//atualizando o maior número
		if(atual > maior)
			maior = atual;

		//atualizando o menor número
		if(atual < menor)
			menor = atual;

		//atualizando o total
		total+=atual;
	}

	//Imprimindo os resultados
	printf("\nA maior nota eh: %f", maior);
	printf("\nA menor nota eh: %f", menor);
	printf("\nA media eh: %f", total/10);

	printf("\n\n");
	return 0;
}
