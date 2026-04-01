/**
 * Atividade 1 - Maior e Menor Nota
 * Desenvolvido por: Alunos
 * CESAR 2026.1 – PIF
*/

#include <stdio.h>

int main()
{
    int n[5] = {};
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a %d nota do aluno: ", i + 1);
        scanf("%d", &n[i]);
    }

    int maior = n[0];
    int menor = n[0];
    int contadorMaior = 0;
    int contadorMenor = 0;

    for (int i = 1; i < 5; i++)
    {
        if(n[i] > maior){
            maior = n[i];
            contadorMaior = i;
        }
        if(n[i] < menor){
            menor = n[i];
            contadorMenor = i;
        }
    }
    printf("Maior elemento foi %d e o indice é %d\n", maior, contadorMaior);
    printf("Menor elemento foi %d e o indice é %d\n", menor, contadorMenor);
}
