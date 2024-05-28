#include<stdio.h>
#include<math.h>

int main(){

    int i, j, div = 0;

    for(i = 1; i < 1000; i++){
        if((i % 3 == 0) || (i % 5 == 0)){
            div += i;
        }
        
    }
    return 0;
}