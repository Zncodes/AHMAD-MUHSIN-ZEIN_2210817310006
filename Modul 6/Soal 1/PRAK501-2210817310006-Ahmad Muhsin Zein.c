#include <stdio.h>

int maxbilangan(int a,int b,int c,int d)
{
    if(a > b && a > c && a > d){return a;}
    else if (b > a && b > c && b > d){return b;}
    else if (c > a && c > b && c > d){return c;}
    else {return d;}
}
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int hasil = maxbilangan(a,b,c,d);
    printf("%d", hasil);
    return 0;
}
