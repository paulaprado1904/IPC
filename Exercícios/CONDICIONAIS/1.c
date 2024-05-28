# include <stdio.h>
#include<stdlib.h>

int main(){
    int h;
    char s;
    float peso;

    printf("Insira 'F' para feminino e 'M' para masculino: ");
    scanf("%c", &s);

    printf("Insira sua altura em metros: ");
    scanf("%d", &h);

    if (s != 'f' && s != 'm'){
        printf("Entrada de caracter incorreta.");
    }
    else{
        if(s == 'f'){
            peso = (62.1 * h) - 44.7;
            printf("Seu peso ideal é: %f", peso);
        }
        else{
            peso = (72.7 * h) - 58;
            printf("Seu peso ideal é: %f", peso);
        }
    }

    return 0;
}