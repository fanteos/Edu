#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//math.h: http://linguagemc.com.br/a-biblioteca-math-h/
/*
4. Codifique um programa que possibilite ao usuário calcular a área e o volume de diversas
formas geométricas, calcular o seno, cosseno e tangente de um ângulo e calcular logaritmos
de números. O seu programa deve possuir o seguinte menu:
a) 1 - Calcular a área de um quadrado
b) 2 - Calcular a área de um círculo
c) 3 - Calcular o volume de um paralelepípedo
d) 4 - Calcular o volume de uma esfera
e) 5 - Calcular o seno de um ângulo
f) 6 - Calcular o cosseno de um ângulo
g) 7 - Calcular a tangente de um ângulo
h) 8 - Calcular o logaritmo de um número
i) 9 - Sair do Programa

Observação 1: Todos os valores informados e calculados no programa devem ser pontos
flutuantes.
Observação 2: Use M_PI da biblioteca math.h como pi.
Observação 3: Todos os valores exibidos pelas operações do programa devem ser apresentados
com oito casas decimais de precisão.
Observação 4: Depois de executada qualquer operação, com exceção de "Sair do Programa",
o menu deve ser exibido novamente para o usuário.
Observação 5: As opções 1, 2, 3 e 4 devem ser calculadas a partir de funções implementadas
por você.

*/

double calcular_area_quadrado(double base);
double calcular_area_circulo(double raio);
double calcular_volume_paralelepipedo(double l1, double l2, double l3);
double calcular_volume_esfera(double raio);
void imprimir_menu();
double graus_para_radianos(double grau);


int main()
{
	int opcao_do_usuario;
	double lado_quadrado, raio_circulo, raio_esfera;
	double l1_paralelepipedo, l2_paralelepipedo, l3_paralelepipedo;
	double angulo, logaritmo_numero;

	do
	{
		imprimir_menu();
		printf("\nInforme a operacao desejada: ");
		scanf("%d", &opcao_do_usuario);

		switch(opcao_do_usuario)
		{
			case 1:
				printf("\nInforme um dos lados do quadrado: ");
				scanf("%lf", &lado_quadrado);
				printf("\nA area do quadrado e: %.8lf m^2", calcular_area_quadrado(lado_quadrado));
				break;

			case 2:
				printf("\nInforme o raio do circulo: ");
				scanf("%lf", &raio_circulo);
				printf("\nA area do circulo e: %.8lf m^2", calcular_area_circulo(raio_circulo));
				break;

			case 3:
				printf("\nInforme as dimensoes do paralelepipedo: ");
				scanf("%lf %lf %lf", &l1_paralelepipedo, &l2_paralelepipedo, &l3_paralelepipedo);
				printf("\nO volume do paralelepipedo e: %.8lf m^3", calcular_volume_paralelepipedo(l1_paralelepipedo, l2_paralelepipedo, l3_paralelepipedo));
				break;

			case 4:
				printf("\nInforme o raio da esfera: ");
				scanf("%lf", &raio_esfera);
				printf("\nO volume da esfera e: %.8lf m^3", calcular_volume_esfera(raio_esfera));
				break;

			case 5:
				printf("\nInforme o angulo: ");
				scanf("%lf", &angulo);
				printf("\nO seno de %8lf e: %.8lf", angulo, sin(graus_para_radianos(angulo)));
				break;

			case 6:
				printf("\nInforme o angulo: ");
				scanf("%lf", &angulo);
				printf("\nO cosseno de %8lf e: %.8lf", angulo, cos(graus_para_radianos(angulo)));
				break;

			case 7:
				printf("\nInforme o angulo: ");
				scanf("%lf", &angulo);
				printf("\nA tangente de %8lf e: %.8lf", angulo, tan(graus_para_radianos(angulo)));
				break;

			case 8:
				printf("\nInforme o valor: ");
				scanf("%lf", &logaritmo_numero);
				printf("\nO logritmo de %lf na base %d e: %.8lf", logaritmo_numero, 10, log10(logaritmo_numero));
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
	printf("\n1 - Calcular a area de um quadrado");
	printf("\n2 - Calcular a area de um circulo");
	printf("\n3 - Calcular o volume de um paralelepipedo");
	printf("\n4 - Calcular o volume de uma esfera");
	printf("\n5 - Calcular o seno de um angulo");
	printf("\n6 - Calcular o cosseno de um angulo");
	printf("\n7 - Calcular a tangente de um angulo");
	printf("\n8 - Calcular o logaritmo de um numero");

	printf("\n\n9 - Sair do Programa\n");
}

double calcular_area_quadrado(double base)
{
	return base*base; //pow(base, 2)
}
double calcular_area_circulo(double raio)
{
	return M_PI*raio*raio; // PI * pow(raio, 2)
}
double calcular_volume_paralelepipedo(double l1, double l2, double l3)
{
	return l1*l2*l3;
}
double calcular_volume_esfera(double raio)
{
	return (4.0/3.0)*M_PI*pow(raio,3);
}
double graus_para_radianos(double grau)
{
	return grau/180.0 * M_PI;
}
