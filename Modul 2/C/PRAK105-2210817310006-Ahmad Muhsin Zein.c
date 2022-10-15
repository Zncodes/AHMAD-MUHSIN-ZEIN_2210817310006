#include <stdio.h>

int main()
{
    int a,b,x,y,j;
    a = 9;
    b = 5;
    x = 8;
    y = 8;
    j = (a%b)+(x%y);

    printf("Variable a bernilai %d\n",a);
    printf("Variable b bernilai %d\n",b);
    printf("Variable x bernilai %d\n",x);
    printf("Variable y bernilai %d\n",y);
    printf("Total sisa bagi dari a bagi b dan x bagi y adalah %d",j);

}
