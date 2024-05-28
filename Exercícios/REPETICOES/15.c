#include<stdio.h>
#include<math.h>

int main(){
    float S=0, i, j;

    for((i = 1) && (j = 1); (i <= 50) && (j < 100); (i++) && (j+=2)){
        S = S + (j/i);
    }

    printf("S = %.2f", S);

    return 0;
}