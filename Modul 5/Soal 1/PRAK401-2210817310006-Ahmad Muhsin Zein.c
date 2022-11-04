#include <stdio.h>

int main()
{
    int a;
    char b[10];
    scanf("%d %c",&a,&b);
    for(int i=1;i < 51;i++){
        if(i % a == 0){
            printf("%s ", b);
        }
        else{
            printf("%d ", i);
        }
    }
}
