#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Dúvidas quanto às derivadas? Teste no https://www.wolframalpha.com/
//Utilize d(funcao(x))/dx para saber a derivada de funcao(x)
//Teste d((3/5)*x^5 + 5*x^3 - 3x^2 + 9*x)/dx para a primeira derivada do exercício
/*
5. Programe um algoritmo que, dada a função f(x) = (3/5)*x^5 + 5*x^3 - 3x^2 + 9*x, calcule o valor de um
ponto aplicado na função e em suas primeira e segunda derivadas. O seu programa deve
oferecer o seguinte menu ao usuário:
a) 1 - Verificar o valor da função para um ponto
b) 2 - Verificar o valor da primeira derivada da função para um ponto
c) 3 - Verificar o valor da segunda derivada da função para um ponto
d) 9 - Sair do Programa

Observação 1: Todos os valores informados e calculados no programa devem ser pontos
flutuantes.
Observação 2: Todos os valores exibidos pelas operações do programa devem ser apresentados
com oito casas decimais de precisão.
Observação 3: Depois de executada qualquer operação, com exceção de "Sair do Programa",
o menu deve ser exibido novamente para o usuário.
Observação 4: Todas as operações, com exceção de "Sair do Programa", devem ser
executadas por funções implementadas por você.

*/

double func_x(double x);
double d1_func_x(double x);
double d2_func_x(double x);
void imprimir_menu();

int main()
{
	int opcao_do_usuario;
	double x;

	do
	{
		imprimir_menu();
		printf("\nInforme a operacao desejada: ");
		scanf("%d", &opcao_do_usuario);

		switch(opcao_do_usuario)
		{
			case 1:
				printf("\nInforme o ponto a ser aplicado na funcao: ");
				scanf("%lf", &x);
				printf("\nO valor de f(%lf) e: %.8lf", x, func_x(x));
				break;

			case 2:
				printf("\nInforme o ponto a ser aplicado na primeira derivada da funcao: ");
				scanf("%lf", &x);
				printf("\nO valor de f'(%lf) e: %.8lf", x, d1_func_x(x));
				break;

			case 3:
				printf("\nInforme o ponto a ser aplicado na segunda derivada da funcao: ");
				scanf("%lf", &x);
				printf("\nO valor de f''(%lf) e: %.8lf", x, d2_func_x(x));
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

void imprimir_menu()
{
	printf("\n\nSelecione uma das opcoes abaixo:\n");
	printf("\n1 - Verificar o valor da funcao para um ponto");
	printf("\n2 - Verificar o valor da primeira derivada da funcao para um ponto");
	printf("\n3 - Verificar o valor da segunda derivada da funcao para um ponto");

	printf("\n\n9 - Sair do Programa\n");
}

double func_x(double x)
{
	return (3/5)*pow(x, 5) + 5*pow(x, 3) - 3*pow(x, 2) + 9*x;
}
double d1_func_x(double x)
{
	return  3*pow(x, 4) + 15*pow(x, 2) - 6*x + 9;
}
double d2_func_x(double x)
{
	return 12*pow(x, 3) + 30*x - 6; // + C
}
