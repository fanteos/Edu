#include <stdio.h>
#include <stdlib.h>

#define NUMERO_DE_ALUNOS 5
#define TAMANHO_MAXIMO_DO_NOME 500

//5. Faça um programa que receba os nomes e as notas de cinco alunos e exiba na tela o aluno
//com maior nota e a média da turma.

int main()
{
  char nome[NUMERO_DE_ALUNOS][TAMANHO_MAXIMO_DO_NOME];
  double notas[NUMERO_DE_ALUNOS];
  int i;
  int maior;
  double total;

  for(i=0;i<NUMERO_DE_ALUNOS;i++)
  {
    fflush(stdin);

    printf("\nInforme o nome do aluno %d: ", i+1);
    fgets(nome[i], TAMANHO_MAXIMO_DO_NOME, stdin);

    printf("Insira a nota de %s: ", nome[i]);
    scanf("%lf", &notas[i]);
  }

  for(i=1,maior=0;i<NUMERO_DE_ALUNOS;i++)
    if(notas[i] > notas[maior])
      maior = i;

  //calculando a média turma
  for(i=0,total=0.0;i<NUMERO_DE_ALUNOS;i++)
    total+=notas[i];

  printf("\nO aluno com maior nota eh: %s\nSua nota eh: %lf", nome[maior], notas[maior]);
  printf("\nA media da turma eh: %lf", total/NUMERO_DE_ALUNOS);


  printf("\n\n");
  return 0;
}
