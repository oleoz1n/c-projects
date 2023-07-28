#include <stdio.h>
int main(){
    int n1;
    int flag;

    printf("Ate que numero: ");
    scanf("%d", &n1);

    for(int i = 1; i <= n1; i++){
        flag = 0;
        for(int j = 1; j <=i; j++){
            if (j != i && j != 1){
                if (i % j == 0){
                    flag += 1;
                }
            }
        }
        if (flag == 0){
            printf("%d", i);
            printf(" eh primo");
            printf("\n");
        }
        else {
            printf("%d", i);
            printf(" nao eh primo");
            printf("\n");
        }

    }
}