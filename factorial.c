#include <stdio.h>

main(){
    int n=5, f;
    fact(n);
    f=fact(n);
    printf("%d \n", f);
}

int fact(int n){
    int f;
    if(n>1){
        f=n*fact(n-1);
        return f;
    }
    else{
        return 1;
    }
}