#include <stdio.h>
int main(){
    int bs, hra,ns;
    float  da ;
    scanf("%d",&bs);
    if(bs<10000){
        da=bs*(10.0/100);
        hra=1500;
        ns=bs+da+hra;
        printf("%d", ns);
    }
    else if(10000<= bs && bs <= 30000){
        da=bs*(15.0/100);
        hra=2000;
        ns=bs+da+hra;
        printf("%d", ns);
    }
    else{
        da=bs*(25.0/100);
        hra=2500;
        ns=bs+da+hra;
        printf("%d", ns);
    }
    return 0;
}