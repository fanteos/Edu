#include <stdio.h>
#include <stdlib.h>

//Escreva um programa que receba três números inteiros
//e imprima na tela o maior número informado

int main()
{
    int numero_1, numero_2, numero_3;
    int maior;

    //Passo 1 - Recebendo os números do usuário
    printf("Exercicio 01 - Maior de tres numeros inteiros.\n");
    printf("\nDigite os numeros a serem processados: ");
    scanf("%d %d %d", &numero_1, &numero_2, &numero_3);

    //Passo 2 - Encontrando quem é o maior número
    maior = numero_1;
    if(numero_2 > maior)
        maior = numero_2;
    if(numero_3 > maior)
        maior = numero_3;

    // Passo 3 - Imprimindo o resultado na tela
    printf("\nO maior numero inteiro informado eh: %d", maior);

    printf("\n\n");
    return 0;
}
