#include<stdio.h>
#include<math.h>

int main(){
    int matriz[5][4], i, j;

    for (i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int entrada;
    printf("Insira a linha a ser apresentada (0 a 4) : ");
    scanf("%d", &entrada);
    switch (entrada){
    case 0: printf("Linha %d selecionada:", entrada);
            for(j = 0; j < 4; j++){
                printf("matriz[%d][%d] = %d\n", entrada, j, matriz[entrada][j]);}
    case 1: printf("Linha %d selecionada:", entrada);
            for(j = 0; j < 4; j++){
                 printf("matriz[%d][%d] = %d\n", entrada, j, matriz[entrada][j]);}
    case 2: printf("Linha %d selecionada:", entrada);
            for(j = 0; j < 4; j++){
                printf("matriz[%d][%d] = %d\n", entrada, j, matriz[entrada][j]);}
    case 3: printf("Linha %d selecionada:", entrada);
            for(j = 0; j < 4; j++){
                 printf("matriz[%d][%d] = %d\n", entrada, j, matriz[entrada][j]);}
    }

    return 0 ;
}