#include<stdio.h>
#include<math.h>

int main(){
    int salario, novosalario;

    printf("Insira seu salário: ");
    scanf("%d", &salario);
    float ajuste;
    ajuste = (7.5/100) * salario;

    if(salario <= 1200){
        novosalario = salario + ajuste + 100;
    }
    else
        novosalario = salario + ajuste;

    printf("O salario será reajustado para: R$%d", novosalario);

    return 0;
}