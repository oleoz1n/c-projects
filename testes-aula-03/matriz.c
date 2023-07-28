#include <stdio.h>

int main(){
    int matriz[3][3] = {
        {1,31,53},
        {41,442,111},
        {41,42,124}
    };

    for( int i = 0; i < sizeof(matriz) / sizeof(matriz[0]); i++){
        for(int j = 0; j < sizeof(matriz[0]) / sizeof(matriz[0][0]); j++){
            printf("matriz[%d][%d] = %d \n", i,j,matriz[i][j]);
        }
    }
}