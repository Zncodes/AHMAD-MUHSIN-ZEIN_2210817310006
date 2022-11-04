#include <stdio.h>

int main() {
    int angka1, angka2, i, j, x, y;
    scanf("%d %d", &angka1, &angka2);
    x = angka1;
    y = angka2;

    if (angka1 > angka2) {
        for(i = angka1, j = angka2; i >= angka2, j <= angka1; i--, j++) {
                while(angka1 >= angka2){
                printf("%d %d - ", angka1, angka2);
                angka1--;
                angka2++;
                continue;
            }
            printf("%d %d - ", angka1, angka2);
            angka1--;
            angka2++;
            if(angka1 == y){
                    printf("%d %d", angka1, angka2);
            }
        }
    }
    else {
        for(i = angka1, j = angka2; i <= angka2, j >= angka1; i++, j--) {
                while(angka1 <= angka2){
                printf("%d %d - ", angka1, angka2);
                angka1++;
                angka2--;
                continue;
            }
            printf("%d %d - ", angka1, angka2);
            angka1++;
            angka2--;
            if(angka2 == x){
                    printf("%d %d", angka1, angka2);
            }
        }
    }
    return 0;
}
