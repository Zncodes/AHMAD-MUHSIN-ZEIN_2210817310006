#include <stdio.h>

int main()
{
    int a;
    for(int i = 0; i <= 4; i ++){
        scanf("%d", &a);
        if(a >= 1 && a <= 9){
            printf("Satuan\n\n");
        }
        else if(a < 1 && a > -1){
            printf("Nol\n\n");
        }
        else if(a > 99){
            printf("Anda Menginput Melebihi Limit Bilangan\n\n");
        }
        else if(a >= 20 && a <= 99){
            printf("Puluhan\n\n");
        }
        else if(a >= 11 && a <= 19){
            printf("Belasan\n\n");
        }
    }
}
