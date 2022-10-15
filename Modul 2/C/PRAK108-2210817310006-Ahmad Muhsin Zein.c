#include <stdio.h>

int main()
{
    float kel,tempuh,phi,jari2;
    phi = 3.14;
    kel = 5;
    tempuh = 14;
    jari2 = (tempuh/kel)*0.5/phi;
    printf("Diketahui :\nPak Dengklek mengelilingi taman = %.f\n",kel);
    printf("Putaran Jarak tempuh Pak Dengklek = %.f Kilometer\n",tempuh);
    printf("\nJawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n",jari2);
}
