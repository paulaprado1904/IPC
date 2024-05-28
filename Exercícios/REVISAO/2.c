/*Paula Prado Carvalho - 12211BSI267*/

#include<stdio.h>

int main(){
    int i, j, vet[10];

    for(i = 0; i < 10; i++){
        printf("vet[%d] = ", i);
        scanf("%d", &vet[i]);
        for(j = 0; j < i; j++){
            while((vet[i] == vet[j]) && (i != j)){
                i = i - 1;
                break;
            }
        }
    }

    for(i = 0; i < 10; i++){
        printf("vet[%d] = %d", i, vet[i]);
    }

    return 0;

}