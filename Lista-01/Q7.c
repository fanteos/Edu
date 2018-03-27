#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_MAXIMO_DA_FRASE 2000

/*
Crie um programa que receba uma frase e troque todas as vogais da frase pela letra A. O
programa deve utilizar uma função que receba uma letra e, caso seja uma vogal, retorne a
letra A, como descrita abaixo. Utilize o comando switch para trocar as letras.
char t r o c a r_l e t r a s ( char l e t r a ) ;
Exemplo de entrada: Irei caminhar hoje
Saída do programa: ArAA cAmAnhAr hAjA
*/
char trocar_letras(char letra);

int main()
{
  char frase[TAMANHO_MAXIMO_DA_FRASE];
  int i;

  printf("Digite a frase a ser codificada: \n");
  fgets(frase, TAMANHO_MAXIMO_DA_FRASE, stdin);

  i=0;
  while(frase[i] != '\0')
  {
    frase[i]=trocar_letras(frase[i]);
    i++;
  }

  printf("A frase com as letras trocadas eh: %s", frase);

  printf("\n\n");
  return 0;
}


char trocar_letras(char letra)
{
  char nova_letra;

  switch (letra)
  {
    case 'a':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      nova_letra = 'A';
      break;

    default:
      nova_letra = letra;
      break;
  }
  return nova_letra;
}
