#include <stdio.h>

int main()
{
    int a;
    for(int i = 0; i <= 2; i ++){
        scanf("%d", &a);
        if(a >= 1){
        printf("positif\n\n");
        }
        else if(a <= -1){
        printf("negatif\n\n");
        }
        else{
            printf("nol\n\n");
        }
    }
}
