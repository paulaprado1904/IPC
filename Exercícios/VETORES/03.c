#include <stdio.h>
#include<stdlib.h>

int main(){
    const int vetor = 20;
    
    int vetA[vetor], vetB[vetor], i;
    
    for (i = 0; i < vetor; i++){
        printf("Insira o valor de vetA[%d]: ", i);
        scanf("%d", &vetA[i]);
        vetB[vetor - 1 - i] = vetA[i];
    }

    for(i = 0; i < vetor; i++){
        printf("vetA[%d] = %d  | vetB[%d] = %d\n", i, vetA[i], i, vetB[i]);
    }
     return 0;
}
