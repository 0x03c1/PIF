/**
 * Script: atv4.c desenvolvido por Juliano
 * CESAR 2026.1 – PIF
 * **/ 

#include <stdio.h>

typedef struct
{
    char nome[20];
    float preco;
    int qtd;
} Produto;

int main()
{
    float preco_maior = 0;
    Produto produto_caro;
    Produto p1[2];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Digite o nome do produto: ");
        scanf("%s", p1[i].nome);

        printf("Digite o preco do produto: ");
        scanf("%f", &p1[i].preco);

        printf("Digite a quantidade do produto: ");
        scanf("%d", &p1[i].qtd);

        if (p1[i].preco > produto_caro.preco || i == 0)
        {
            produto_caro = p1[i];
        }
    }
    printf("O produto mais caro é %s valor de %.2f\n", produto_caro.nome, produto_caro.preco);

    return 0;
}
