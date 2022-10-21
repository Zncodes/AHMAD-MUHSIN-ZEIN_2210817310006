#include <stdio.h>

int main()
{
        for(int i = 0; i <= 1; i++){
        float a, b, o, j, x, y, hl;
        scanf("%f %f %f %f %f %f", &a, &b, &o, &j, &x, &y);
        hl = (a-b)*(o/j)-(x+y);
        printf("%.3f\n\n",hl);
    }
}
