#include <stdio.h>
#include <stdlib.h>

/*
Codifique um programa que receba diversos números inteiros de um usuário e exiba a
média dos números recebidos. O seu programa deve parar e exibir a média dos números
quando o usuário informar o número zero (0) na entrada. Utilize o comando while como
laço para receber os números.
*/


int main()
{
	int numero_atual, qtt_numeros, total;

	total=0;
	qtt_numeros=0;

	do{
		printf("\nInsira um numero: ");
		scanf("%d", &numero_atual);
		total+=numero_atual;//total = total + numero_atual;
		qtt_numeros++;//qtt_numeros = qtt_numeros +1; ou qtt_numeros+=1;
	}while(numero_atual != 0);

	qtt_numeros--;

	printf("\n\nA quantidade de numeros informados eh: %d", qtt_numeros);
	printf("\nA media dos numeros informados eh: | %d | %f |", total/qtt_numeros, (float)total/qtt_numeros);

	printf("\n\n");
	return 0;
}
