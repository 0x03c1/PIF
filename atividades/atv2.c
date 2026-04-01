/**
 * Atividade 2 - Média de Notas
 * Desenvolvido por: Alunos
 * CESAR 2026.1 – PIF
*/

#include <stdio.h>

int main()
{
    int n;
    float soma = 0;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &n);
    float notas[n];
    for (int i = 0; i < n; i++)
    {
        printf("Digite a %d nota: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    printf("A media foi %.1f", soma / n);
    return 0;
}
