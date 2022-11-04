#include <stdio.h>

int main(){
    int a, b, h1,h2,h3;
    h1 = 0;h2 = 0;h3 = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = 0; i < a; i++){
        for(int j = i; j >= 0; j--){
            printf("(%d * %d)", j+1, b);
            if(j > 0){printf(" + ");}}
        h1 = (i+1)* b;
        h2 = h2 + h1;
        printf(" = %d\n",h2);
        h3 = h3 + h2;
    }
    printf("%d\n", h3);
    return 0;
}
