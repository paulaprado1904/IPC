#include <stdio.h>
#include<stdlib.h>

int main(){
    int i, v[10];

    for(i = 0; i < 10; i++){
        printf("Insira  valor %d: ", i);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < 10; i++){
        if(v[i] % 2 == 0) 
            printf ("%d eh par\n", v[i]);
        else printf ("%d eh ímpar\n", v[i]);
    }

    return 0;
}