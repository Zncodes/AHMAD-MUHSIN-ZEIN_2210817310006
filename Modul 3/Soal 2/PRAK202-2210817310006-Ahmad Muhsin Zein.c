#include <stdio.h>

int main()
{
    for(int i = 0; i <= 1; i++){
    float n1,n2,h;
    printf("Masukkan Nilai Pertama\t: ");
    scanf("%f", &n1);
    printf("Masukkan Nilai Kedua\t: ");
    scanf("%f", &n2);
    h= n1+n2;
    printf("\nHasil dari penjumlahan nilai pertama ");
    printf("\"%.2f\" dan nilai kedua \"%.2f\" adalah \"%.2f\"\n\n\n",n1,n2,h);
}
}
