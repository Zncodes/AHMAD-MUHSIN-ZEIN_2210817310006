#include <stdio.h>

int reverse(int n){
    int rev = 0;
    while(n!=0){
            rev = rev*10;
            rev = rev+n%10;
            n = n/10;}
        return rev;}
    int main(){
        int A,B;
        scanf("%d %d", &A,&B);
        A = reverse(A);
        B = reverse(B);
        int C = A + B;
        printf("%d", reverse(C));
            }


