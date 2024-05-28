#include<stdio.h>

int main(){
    int num;

    printf("Insira um numero: ");
    scanf("%d", &num);

    if((num % 2 == 0 && num > 100) || (num % 2 != 0 && num < 70)){
        printf("Parabéns!");
    }
    else
        printf("Sinto muito.");


    return 0;
}