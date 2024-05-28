#include<stdio.h>
# include<math.h>

int main(){
    int n, i, j, seq;

    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);
    seq = 1;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", seq);
            seq++;
        }
        printf("\n");
    }

    return 0;
}