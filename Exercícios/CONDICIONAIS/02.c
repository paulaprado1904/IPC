#include <stdio.h>
#include<stdlib.h>

int main(){

    char G1, G2;
    printf("Jogador 1, insira seu comando: ");
    getchar(G1);
    printf("Jogador 2, insira seu comando: ");
    getchar(G2);

    if( (G1 == 'R'&& G2 == 'S') || (G1 == 'S' && G2 == 'P') || (G1 == 'P' && G2 == 'R') ){
        printf("Jogador 1 é o vencedor!");
    }
    else{
        if (G1 == G2){
            printf("Empate!");
        }
        else printf("Jogador 2 é o vencedor!");
    }


    return 0;
}