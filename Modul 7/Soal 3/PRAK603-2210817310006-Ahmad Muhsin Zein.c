#include <stdio.h>

int main()
{
    int a1,a2,i,j,x,hasil;
    scanf("%d %d", &a1, &a2);
    int y1[a1], y2[a2];
    if(a1==a2){
        for(int i = 0; i < a1; i ++){
        scanf("%d",&x);
        y1[i]=x;
        }
        for(int i = 0; i < a2; i ++){
        scanf("%d",&x);
        y2[i]=x;
        }
        for(int i = 0; i < a1; i ++){
        hasil = y1[i]*y2[i];
        printf(" %d ",hasil);
        }
    }
    else{
        printf("Jumlah Tidak Sama");
    }
}
