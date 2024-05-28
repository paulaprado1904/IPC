#include <stdio.h>
#include <stdlib.h>

int main (){
    int N, i, maior = 0;

    printf("Insira o tamanho do vetor: ");
    scanf ("%d", &N);
    int v[N];

    for(i = 0; i < N; i ++){
        printf("Valor %d: ", i);
        scanf("%d", &v[i]);
        if(v[i] > maior)
            maior = v[i];
    }    

    printf("O maior valor inserido foi: %d", maior);

    return 0;
}