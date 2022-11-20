#include <stdio.h>

int main()
{
    int a,x,i,j;
    scanf("%d",&a);
    int y[a];
    for(int i = 0; i < a; i ++){
        scanf("%d",&x);
        y[i]=x;
    }
    for (i=0; i<a; i++){
        printf(" %d ", y[i]* (i+1));
}
}
