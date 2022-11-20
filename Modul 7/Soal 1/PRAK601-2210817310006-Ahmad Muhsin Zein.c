#include <stdio.h>

int main()
{
    int a,b,i,j,x;
    scanf("%d %d", &a, &b);
    int y[a][b];
        for(int i = 0; i < a; i ++){
            for(int j = 0; j < b; j++){
                scanf("%d", &x);
                y[i][j]=x;
    }
}
for (i=0; i<a; i++){
        for (j=0;j<b;j++){
        printf(" %d ", y[i][j]);
    }
    printf("\n");
}
}
