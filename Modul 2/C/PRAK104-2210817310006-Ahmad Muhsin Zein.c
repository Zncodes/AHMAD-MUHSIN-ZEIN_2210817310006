#include <stdio.h>

int main()
{
    float A,B,DA,DB,HA,HB;
    char disc = '%';
    A =400000;
    B =350000;
    DA = 13;
    DB = 21;
    HA = A - DA/100 * A;
    HB = B - DB/100 * B;
    printf("Harga Sepatu A adalah %.0f\n",A);
    printf("Harga Sepatu B adalah %.0f\n",B);
    printf("sepatu A mendapat diskon 13 %c sehingga harganya menjadi %.0f\n",disc,HA);
    printf("sepatu B mendapat diskon 21 %c sehingga harganya menjadi %.0f\n",disc,HB);
}

