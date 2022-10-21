#include <stdio.h>

int main()
{
    char nama[50],nim[20],kls[50],ttl[90],alamat[90],hobi[50],hp[50];
    printf("Nama\t\t\t: ");
    fgets(nama,50,stdin);
    printf("NIM\t\t\t: ");
    fgets(nim,20,stdin);
    printf("Kelas Pararel\t\t: ");
    fgets(kls,50,stdin);
    printf("Tempat/Tanggal Lahir\t: ");
    fgets(ttl,90,stdin);
    printf("Alamat\t\t\t: ");
    fgets(alamat,90,stdin);
    printf("Hobby\t\t\t: ");
    fgets(hobi,50,stdin);
    printf("No. HP\t\t\t: ");
    fgets(hp,50,stdin);

    printf("\nNama\t\t\t: %s",nama);
    printf("NIM\t\t\t: %s",nim);
    printf("Kelas Pararel\t\t: %s",kls);
    printf("Tempat/Tanggal Lahir\t: %s",ttl);
    printf("Alamat\t\t\t: %s",alamat);
    printf("Hobby\t\t\t: %s",hobi);
    printf("No. HP\t\t\t: %s",hp);
}
