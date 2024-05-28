#include<stdio.h>
#include<math.h>

int main(){
    int matriz[8][8];
    int i, j, soma = 0;

    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    for(i = 0; i < 8; i++){
        soma += matriz[i][i];
    }

    printf("A soma da diagonal principal é: %d", soma);

    return 0;
}