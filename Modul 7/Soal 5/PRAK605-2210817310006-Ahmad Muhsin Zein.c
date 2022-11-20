#include <stdio.h>

int main(){
    int matA[10][10],matB[10][10],hasil[10][10];
    int i,j,k,n,jumlah=0;
    scanf("%d", &n);
    printf("\nMatriks A\n");
    for(i = 0; i < n; i++){
        for (j = 0; j < n; j++){
                scanf("%d", &matA[i][j]);}}
    printf("\nMatriks B\n");
    for(i = 0; i < n; i++){
        for (j = 0; j < n; j++){
                scanf("%d", &matB[i][j]);}}
    for(i = 0; i < n; i++){
        for (j = 0; j < n; j++){
                for (k = 0; k < n; k++){
                        jumlah = jumlah + matA[i][k] * matB[k][j];}
                        hasil[i][j] = jumlah;
                        jumlah=0;}}
    printf("\nMatriks AXB\n");
    for(i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                printf("%d ", hasil[i][j]);}
    printf("\n");}}
