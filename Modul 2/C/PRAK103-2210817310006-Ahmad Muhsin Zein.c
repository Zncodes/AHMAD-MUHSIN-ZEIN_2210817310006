#include <stdio.h>

int main()
{
    float a = 9,b = 6,x = 10,y = 7,j;
    j = (a+b)*x/y;
    printf("Variabel a bernilai %.0f\n",a);
    printf("Variabel b bernilai %.0f\n",b);
    printf("Variabel x bernilai %.0f\n",x);
    printf("Variabel y bernilai %.0f\n",y);
    printf("Hasil dari a ditambah b dikali x dibagi y adalah %.2f",j);
}
