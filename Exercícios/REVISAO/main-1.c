/*Paula Prado Carvalho - 12211BSI267*/

#include<stdio.h>
#include<math.h>

int main(){

    float vet[20], aux;
    int i, j;
    for(i = 0; i < 20; i++){
        printf("vet[%d] = ", i);
        scanf("%f", &vet[i]);
    }

    for(i = 0; i < 20; i++){
        for(j = i+1; j < 20; j++){
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for(i = 0; i < 20; i++){
        printf("vet[%d] = %.2f\n", i, vet[i]);
    }

    return 0;
}