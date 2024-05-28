#include<stdio.h>
#include<math.h>

int main(){

    int n, i, j, div = 0;

    printf("Insira um numero positivo: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++){
        if(n % i == 0){
            div += i;
            printf("%d\n", i);
            }
    }
    

    printf("A soma dos divisores eh: %d", div);

    return 0;
}