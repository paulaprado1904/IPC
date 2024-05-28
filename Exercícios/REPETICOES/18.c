#include<stdio.h>
#include<math.h>

int main(){
    int n, i, cont = 0;
   

    printf("Insira um numero inteiro positivo: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(n % i == 0){
            cont++;
        }
    }

    if(cont == 2){
        printf("Eh um numero primo!");
    }
    else{
        printf("Nao um numero primo!");
    }

    return 0;
}