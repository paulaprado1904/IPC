#include <stdio.h>
#include <math.h>

int main(){

    int iA, jA, iB, jB;
    printf("Insira a quantidade de linhas da matriz A:");
    scanf("%d", &iA);

    printf("Insira a quantidade de colunas da matriz A:");
    scanf("%d", &jA);

    printf("Insira a quantidade de linhas da matriz B:");
    scanf("%d", &iB);

    printf("Insira a quantidade de linhas da matriz A:");
    scanf("%d", &jB);

    if(jA != iB){
        printf("Matrizes inválidas para multiplicação");
    }
    else{

         int matrizA[iA][jA], matrizB[iB][jB], mult, resultado[iA][jB],a, b, c, x, y, i, j;
        for(i = 0; i < iA; i++){
            for (j = 0; j < jA; j++){
                printf("Insira a matrizA[%d][%d] = ", i, j);
                scanf("%d", &matrizA[iA][jA]);
            }
        }
        for(i = 0; i < iB; i++){
            for (j = 0; j < jB; j++){
                printf("Insira a matrizA[%d][%d] = ", i, j);
                scanf("%d", &matrizA[iB][jB]);
            }
        }

        int auxiliar[i*i], cont = 0;
        for(i = 0; i < iA; i++){
            int soma = 0;
            for (j = 0; j < jB; j++){
                soma = 0;
                for(c = 0; c < jA; c++){
                    x = matrizA[iA][jA];
                    y = matrizB[jA][jB];
                    mult = x * y;
                    soma += mult;
                }
                
            }
            
            resultado[iA][jB] = soma; 
            printf("%d", resultado[iA][jB]);
            
        }
        
        

    }
    
    return 0;   
}