/*Paula Prado Carvalho - 12211BSI267*/

#include<stdio.h>
#include<math.h>

int main(){
    
    int mat[3][3];
    int linha, coluna, jog, resultado = 0, cont = 0, i;

    do{
    printf("Linha escolhida: ");
    scanf("%d", &linha);

    printf("Coluna escolhida: ");
    scanf("%d", &coluna);

    printf("Digite o numero do jogador: ");
    scanf("%d", &jog);
    
    mat[linha][coluna] = jog;

    for(i = 0; i < 3; i++){
        if(((mat[0][i] == mat[1][i]) && (mat[1][i] == mat[2][i])) || ((mat[i][0] == mat[i][1]) && (mat[i][1] == mat[i][2]))){
            resultado = 1;
            printf("Parabéns! O jogador %d é o vencedor!", jog);
            break;
        } 
    if(((mat[0][0] == mat[1][1]) && (mat[1][1] == mat[2][2])) || ((mat[2][0] == mat[1][1]) && (mat[1][1] == mat[0][2]))){
            resultado = 1;
            printf("Parabéns! O jogador %d é o vencedor!", jog);
            break;
            
    }
    else{
        resultado = 0;
        cont++;
    }
    if(cont == 9){
        printf("Não houve vencedores!");
        break;
            
    }
        
    }

    }while(resultado == 0);
    
    return 0;
}