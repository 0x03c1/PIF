/**
 * Atividade 3 - Soma da Diagonal Principal
 * Desenvolvido por: Alunos
 * CESAR 2026.1 – PIF
*/
#include<stdio.h>

int main(){

    int matriz[3][3] = {
     {2, 3, 4},
     {5, 3, 7},
     {2, 5, 4}};

     int soma = 0;
     for(int i = 0; i < 3; i++){
        
        soma += matriz[i][i];
     }

    printf("A soma da matriz é: %d\n", soma);
}
