#include<stdio.h>
#include<math.h>

int main(){

    int M[8][8];
    int i, j ,somaprinc = 0, somadiag = 0;

    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            printf("M[%d][%d]", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for(i = 0; i < 8; i++){
        somaprinc += M[i][i];
        if(i == 7){
            break;
        }
        else
            somadiag += M[i + 1][i];
        
    }

    printf("A soma da diogonal principal eh: %d\nA soma da diagonal secundaria eh: %d.", somaprinc, somadiag);
    return 0;
}