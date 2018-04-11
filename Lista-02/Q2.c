#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define VOLUME_DA_LATA_DE_TINTA 5 //litros
#define AREA_PINTADA_POR_LITRO_DE_TINTA 3 //metros quadrados

/*
2. Construa um programa que calcule a quantidade de latas de tinta necessárias e o custo
para pintar tanques cilíndricos de combustível, onde serão fornecidos a altura e o raio
desse cilindro e o custo da lata de tinta. Sabe-se que:
a) Cada lata de tinta contém 5 litros
b) Cada litro de tinta pinta 3 metros quadrados;
c) Área do cilindro = 2 vezes a área da base + circunferência da base vezes a altura;
d) O raio e altura do cilindro serão os dados de entrada.
*/

//double area = área que será calcular_quantidade_de_latas_de_tinta
//retorna a quantidade de latas de tintas (arredondadas para cima) necessárias para pintar esta área
int calcular_quantidade_de_latas_de_tinta(double area);//area em metros quadrados
double calcular_area_do_cilindro(double raio, double altura);//retorna a area em m², recebe as medidas em metros

int main()
{
	double altura_do_cilindro, raio_do_cilindro, preco_da_lata_de_tinta;//variáveis que serão recebidas do usuário
	double area_do_cilindro, preco_total_da_pintura;
	int quantidade_de_latas_de_tinta; //inteiro pois não é possível comprar um número não-inteiro de latas de tintas


	printf("Informe a altura do cilindro a ser pintado: ");
	scanf("%lf", &altura_do_cilindro);

	printf("Informe o raio do cilindro a ser pintado: ");
	scanf("%lf", &raio_do_cilindro);

	printf("Informe o preco da lata de tinta: ");
	scanf("%lf", &preco_da_lata_de_tinta);

	area_do_cilindro = calcular_area_do_cilindro(raio_do_cilindro, altura_do_cilindro);
	quantidade_de_latas_de_tinta = calcular_quantidade_de_latas_de_tinta(area_do_cilindro);
	printf("\nArea = %.2lf m^2 \nQtt_Latas = %d unidades",  area_do_cilindro, quantidade_de_latas_de_tinta);

	preco_total_da_pintura = quantidade_de_latas_de_tinta*preco_da_lata_de_tinta;
	printf("\nO valor necessario para efetuar a pintura do cilindo e: R$%.2lf", preco_total_da_pintura);

	printf("\n\n");
	return 0;
}

int calcular_quantidade_de_latas_de_tinta(double area)
{
	double quantidade_de_latas;
	quantidade_de_latas = (area/AREA_PINTADA_POR_LITRO_DE_TINTA)/VOLUME_DA_LATA_DE_TINTA;
	printf("\nO valor nao arredondado e: %lf\n", quantidade_de_latas);
	return (int)ceil(quantidade_de_latas);//retorna o valor inteiro maior mais próximo do número

}

double calcular_area_do_cilindro(double raio, double altura)
{
	double area_do_cilindro;
	area_do_cilindro = 2*(M_PI * pow(raio, 2)) + (2 * M_PI * raio * altura);
	return area_do_cilindro;
}
