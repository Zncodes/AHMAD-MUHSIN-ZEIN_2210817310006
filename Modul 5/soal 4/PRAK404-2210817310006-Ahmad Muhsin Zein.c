#include <stdio.h>

int main()
{
    int a; float n1,n2,h1,h2,h3,h4;
    menu :
    printf("Pilih Program\n1.Penjumlahan\n2.Pengurangan\n3.Perkalian\n4.pembagian\n5.Exit\n");
    printf("Masukkan Pilihan : ");
    scanf("%d",&a);
    if(a>=1 && a<=4){
        printf("\nMasukkan Nilai Pertama : ");scanf("%f",&n1);
        printf("\nMasukkan Nilai Kedua : ");scanf("%f", &n2);
            if (a==1){h1 = n1 + n2;
            printf("\nHasil Penjumlahan antara %.2f dan %.2f adalah %.2f\n\n",n1,n2,h1);
            goto menu;}
            else if(a==2){h2 = n1 - n2;
            printf("\nHasil Pengurangan antara %.2f dan %.2f adalah %.2f\n\n",n1,n2,h2);
            goto menu;}
            else if(a==3){h3 = n1 * n2;
            printf("\nHasil Perkalian antara %.2f dan %.2f adalah %.2f\n\n",n1,n2,h3);
            goto menu;}
            else if(a==4){h4 = n1/n2;
            printf("\nHasil Pembagian antara %.2f dan %.2f adalah %.2f\n\n",n1,n2,h4);
            goto menu;}}
    else if(a==5){printf("\nTerima kasih telah menggunakan kalkulator Zein\n");
    return 0;}
    else{printf("\nInput anda salah, silahkan coba lagi\n\n");
    goto menu;}
}

