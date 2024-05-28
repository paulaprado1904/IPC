#include<stdio.h>

int main(){
    int n, maior = -10000000, repet=0, i, num;

    printf("Insira a quantidade de numeros a serem lidos: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Insira o numero %d: ", i);
        scanf("%d", &num);

        if(num == maior){
            repet++;
        }
        if (num > maior){
            maior = num;
            repet = 1;
        }
    }

    printf("O maior numero inserido eh o: %d\nE foi lido %d vezes", maior, repet);
    return 0;
}