#include <stdio.h>

int main()
{
    int d,m,j,s,h;
    for(int i = 0; i <= 4; i ++){
    scanf("%d", &d);
    h = (d%(86400*30))/86400;
    j = (d%86400)/3600;
    m = (d%3600)/60;
    s = (d%60);

    if(h == 0){
    printf("%02d:%02d:%02d\n\n", j,m,s);
    }
    else{
        printf("%d hari %02d:%02d:%02d\n\n",h,j,m,s);
    }
    }

}
