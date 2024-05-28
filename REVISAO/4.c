/*Paula Prado Carvalho - 12211BSI267*/

#include<stdio.h>
#include<math.h>

int main(){

    int n, i;

    printf("Numeros a serem lidos: ");
    scanf("%d", &n);

    float v[n], soma = 0, media, somat, d;

    for(i = 0; i < n; i++){
        printf("v[%d] = ", i);
        scanf("%f", &v[i]);
        soma += v[i];
    }

    media = soma / n;

    for(i = 0; i < n; i++){
        somat += (pow((v[i] - media), 2)); 
    }

    d = somat / (n - 1);

    printf("A variância da amostra é: %.3f", d);


    return 0;
}