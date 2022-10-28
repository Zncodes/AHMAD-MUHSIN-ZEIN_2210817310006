#include <stdio.h>

int main()
{
    int a;
    for(int i = 0; i <= 4; i ++){
        scanf("%d", &a);
        if(a >= 80 ){
            printf("A\n\n");
        }
        else if(a >= 70 && a<= 79){
            printf("B\n\n");
        }
        else if(a >= 60 && a<= 69){
            printf("C\n\n");
        }
        else if(a >= 50 && a<= 59){
            printf("D\n\n");
        }
        else if(a < 50){
            printf("E\n\n");
        }
    }
}
