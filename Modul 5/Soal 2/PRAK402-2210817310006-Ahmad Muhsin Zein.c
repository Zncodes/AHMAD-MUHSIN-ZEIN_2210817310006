#include <stdio.h>

int main()
{
    int angka,a,b;
    scanf("%d", &angka);
    for(a = 1;a < angka + 1;a++){
        if (a % 2 == 1){
                if (a != angka){
                printf(" %d ", a);}
        }
        else if(a % 2 == 0 && a == angka){
                printf("\n");
    }
    }
    b = angka;
    while(b>0){
        if(b%2 == 0){
                printf(" %d ",b); b -= 2;
        }
        else{
            b -= 1;
        }
    }
}
