#include <stdio.h>

int main()
{
        for(int i = 0; i <= 1; i++){
        float j,t,phi,v,l,k;
        phi=22/7.f;
        scanf("%f %f", &j,&t);
        v=phi*j*j*t;
        l=(2*phi*j)*(j+t);
        k=(2*phi*j);
        printf("Volume = %.2f\n",v);
        printf("Luas = %.2f\n",l);
        printf("Keliling = %.2f\n", k);
    }
}
