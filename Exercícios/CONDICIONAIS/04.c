#include<stdio.h>
#include<math.h>

int main()  {

    float a, b, c, delta, x1, x2;

    printf("Insira os coeficientes da equação do segundo grau:");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    delta = b*b - 4 * a * c;

    if (a == 0){
        printf("Não é equação do segundo grau.");
    }
    else{
        if(delta < 0){
            printf("Não existe raiz.");
        }
        else{
            if(delta == 0){
                x1 = (- b + sqrt(delta))/ 2 * a;
                printf("Raiz única = %f", x1);
            }
            else{
                x1 = (- b + sqrt(delta))/ 2 * a;
                x2 = (- b - sqrt(delta))/ 2 * a;
                printf("Duas raízes reais = %f e %f", x1, x2);
            }
        }
    }
    return 0;
}