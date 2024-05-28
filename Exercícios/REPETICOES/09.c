#include<stdio.h>
#include<math.h>

int main(){
    float C, K, F;

    for(C = -10; C <= 100; C++){
        F = (9*C / 5) + 32;
        K = C + 273.15;
        printf ("C = %.2f | F = %.2f | K = %.2f\n", C, F, K);
    }

    return 0;
}