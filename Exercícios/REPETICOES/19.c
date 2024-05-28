#include<stdio.h>
#include<math.h>

int main(){
    int n, i, j, cont = 0, primos = 0;

    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++){
        cont = 0;
        for(j = 1; j <= i; j++){
            if(i % j == 0){
                cont++;
            }
        }
        if(cont == 2){
            primos = primos +  i;
        }
    }

    printf("A soma dos numeros primos eh: %d", primos);

    return 0;
}