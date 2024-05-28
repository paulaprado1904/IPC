#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int n, i;
    float nl;
    printf("Insira o numero de valores a serem lidos:");
    scanf("%d", &n);

    float V[n];
    float dp, media, somat = 0, soma = 0;

    for(i = 0; i < n; i++){
        printf("V[%d] = ", i);
        scanf("%f", &V[i]);
        soma += V[i];
    }
    nl = n;
    media = soma / nl;

    for(i = 0; i < n; i++){
        somat += pow((V[i] - media), 2);
    }
    dp = sqrt(0.5 * somat);

    printf ("O desvio padrão dos valores eh: %f", dp);

}