#include<stdio.h>
#include<math.h>

int main(){
    int n, i;

    printf("Insira um numero inteiro e positivo: ");
    scanf("%d", &n);
    printf("Divisores:\n");
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }

    }


    return 0;
}