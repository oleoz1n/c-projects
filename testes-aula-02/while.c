#include <stdio.h>

int main() {
    int total;
    int count = 0;

    printf("Ate que numero: ");
    scanf("%d", &total);
    if (count <= total){
        while (count <= total) {
            printf("%d ",count);
            count++;
        }
    }
    else if (count > total)
    {
        while (count >= total)
        {
            printf("%d ",count);
            count--;

        }
        
    }
    
}