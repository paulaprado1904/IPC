#include<stdio.h>
#include<math.h>

int main(){

    int linhas, colunas, i, j ;
    printf("Insira a quantidade de linhas: ");
    scanf("%d", &linhas);
    printf("Insira a quantidade de colunas: ");
    scanf("%d", &colunas);

    int V[linhas], matrizA[linhas][colunas], resultado[linhas] ;
    float soma;

    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            printf("Insira o valor de matrizA[%d][%d] = ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    for (i = 0; i < linhas; i++){
        printf("Insira o valor de vetor[%d] = ", i);
            scanf("%d", &V[i]);
    }
    
    for (i = 0; i < linhas; i++){
        soma = 0;
        for (j = 0; j < colunas; j++){
            soma += matrizA[i][j] * V[i]; 
        }
        resultado[i] = soma;
    }
    
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            printf("resultado[%d][%d] = %d\n", i, j, resultado[i]);
        }
    }

}