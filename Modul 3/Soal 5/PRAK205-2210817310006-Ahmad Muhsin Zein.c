#include <stdio.h>

int main()
{
    for(int i = 0; i <= 1; i++){
        int a,b,al,k,l;
        scanf ("%d %d", &a,&b);
        al=sqrt(pow(b,2)-pow(a,2));
        k=a+b+al;
        l=0.5*al*a;
        printf("\nAlas\t\t= %d cm\n",al);
        printf("Tinggi\t\t= %d cm\n",a);
        printf("Keliling\t= %d cm\n",k);
        printf("Luas\t\t= %d cm^2\n\n",l);
    }
}
