#include<stdio.h>
#include<math.h>

int main(){
    int num = 10, n, i;
    float media;
    int maior = 0, menor = 10000000;
    float soma = 0;


    for(i = 0; i < num; i++){
        printf("Insira o %d numero: ", i+1);
        scanf("%d", &n);

        if(n < 0){
                i = i - 1;
                continue;
        }

        while (n >= 0){
            soma = soma + n;
            
            if (n > maior){
                maior = n;
            }
            else if(n < menor){
                menor = n;
            }
            break;
        }

    }
    media = soma/ num;

    printf("A media dos numeros indicados eh: %.2f\nO maior numero eh: %d\nO menor numero eh: %d", media, maior, menor);

    return 0;
}