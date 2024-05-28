/*Paula Prado Carvalho - 12211BSI267*/

#include<stdio.h>
#include<math.h>

int main(){
    int n;

    printf("Numero de valores a serem lidos: ");
    scanf("%d", &n);

    int i;
    float soma = 0, S = 0, j, vet[n], pot, fracao;

    for(i = 0; i < n; i++){
        printf("vet[%d] = ", i);
        scanf("%f", &vet[i]);
        j = i + 1;
        fracao = vet[i]/ (j*j);
        soma = soma + fracao;
    }
    pot = (float) 1 / (float) 3;
    S = (pow(soma, pot));
    printf("S = %.2f", S);
    return 0;
}