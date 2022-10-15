#include <stdio.h>

int main()
{
    int a,b,c,kel,harga,hargapagar;
    a = 4;
    b = 5;
    c = 7;
    kel = a+b+c;
    harga = 85000;
    hargapagar = kel * harga;

    printf("Diketahui: \nPanjang sisi segitiga berturut-turut adalah %d,%d,dan %d\n",a,b,c);
    printf("Keliling Tanah Pak Dengklek Adalah %d\n",kel);
    printf("Harga tanah Per meter adalah %d\n",harga);
    printf("Jawaban : \nBiaya yang diperlukan Pak Dengklek adalah : Rp%d\n",hargapagar);
}
