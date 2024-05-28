#include <stdio.h>
#include <math.h>

int main(){
    
    float somatorio, fracao;
    int n, i;
    printf("Insira a quantidade de valores a serem lidos: ");
    scanf("%d", &n);
    
    float v[n];
    
    
    for(i = 0; i < n; i++){
        printf("v[%d] = ", i);
        scanf("%f", &v[i]);
        fracao = 1 / v[i];
        somatorio = somatorio + fracao;
    }

    printf("O valor armazenado do somatorio eh: %f", somatorio);

    return 0;
}