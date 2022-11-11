int maksimal (int a,int b){
if(a > b){return a;}
else{return b;}}

int minimal (int a,int b){
if(a < b){return a;}
else{return b;}}

int main(){
int batas,bilangan,maks,minim,nilai;
batas = 0; maks = -100000; minim = 100000;
scanf("%d", &bilangan);
while (batas < bilangan){
    scanf ("%d", &nilai);
    maks = maksimal(maks, nilai);
    minim = minimal(minim, nilai);
    batas ++;
}
printf("%d %d",maks, minim);
}
