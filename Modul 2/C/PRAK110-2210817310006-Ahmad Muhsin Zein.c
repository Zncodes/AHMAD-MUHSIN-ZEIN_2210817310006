#include <stdio.h>

int main()
{
    float a,b,c,k,l,al,t;
    al=5;
    t =12;
    a=t;
    c=al;
    b= sqrt((a*a)+(c*c));
    k= a+b+c;
    l= 0.5*al*t;

    printf("Diketahui :\nAlas = %.f cm\n",al);
    printf("Tinggi = %.f cm\n\n",t);
    printf("Jawab :\n");
    printf("Sisi A = %.f cm\n",a);
    printf("Sisi B = %.f cm\n",b);
    printf("Sisi C = %.f cm\n",c);
    printf("Keliling = %.f cm\n",k);
    printf("Luas = %.f cm\n",l);
}
