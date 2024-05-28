#include<stdio.h>

int main(){
    
    int num;

    printf("Insira um número entre 1 e 7, correspondente ao dia da semana: ");
    scanf("%d", &num);

    switch (num){
    case 1 : printf("Segunda-feira");
        break;
    case 2 : printf("Terça-feira");
        break;
    case 3 : printf("Quarta-feira");
        break;
    case 4 : printf("Quinta-feira");
        break;
    case 5 : printf("Sexta- feira");
        break;
    case 6 : printf("Sábado");
        break;
    case 7 : printf("Domingo");
        break;
    default: printf("Número deve ser entre 1 e 7. Sinto muito!");
        break;
    }
    
    return 0;
}