#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    
    int matrizA[2][3] = {{15,52,29}, {47,34,85}};
    int matrizB[2][3] = {{5,13,11}, {8,7,-10}};
    int matrizC[2][3], i, j, soma = 0;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("matrizC[%d][%d] = %d\n", i, j, matrizC[i][j]);
        }
    }

    return 0;
}