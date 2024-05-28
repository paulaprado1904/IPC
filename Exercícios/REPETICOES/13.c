#include<stdio.h>
#include<math.h>

int main(){
    int a, b, fibo = 0, num;

    printf("Insira um número: ");
    scanf("%d", &num);

    a = 0;
    b = 1;
    printf("Sequência Fibonacci:\n");
    printf("%d\n", a);
    printf("%d\n", b);
    while (fibo <= num){
        fibo = a + b;
        a = b;
        b = fibo;
        printf("%d\n", fibo);
    }
    
    return 0;
}