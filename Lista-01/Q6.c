#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que receba dois inteiros do usuário e exiba na tela os resultados
da multiplicação e da soma dos dois números. O seu programa deve possuir as seguintes
funções de soma e multiplicação, como descritas abaixo.
i n t somar_dois_numeros ( i n t numero1 , i n t numero2 ) ;
i n t mul t ipl icar_doi s_numeros ( i n t numero1 , i n t numero2 ) ;
*/

/*Função que soma dois números inteiros
numero1 é um número inteiro
numero2 é um numero inteiro
retorna um número inteiro*/
int somar_dois_numeros(int numero1, int numero2);
int multiplicar_dois_numeros(int numero1, int numero2);

int main()
{
  int num1, num2;

  printf("Informe o primeiro numero: ");
  scanf("%d",&num1);

  printf("\nInforme o segundo numero: ");
  scanf("%d",&num2);

  printf("\n\nA soma dos dois numeros eh: %d", somar_dois_numeros(num1,num2));
  printf("\n\nA multiplicacao dos dois numeros eh: %d", multiplicar_dois_numeros(num1,num2));


  printf("\n\n");
  return 0;
}


int somar_dois_numeros(int numero1, int numero2)
{
  return(numero1+numero2);
}
int multiplicar_dois_numeros(int numero1, int numero2)
{
  return(numero1*numero2);
}
