#include<stdio.h>

main(){
    int i=1, j=1, n=10;
    while(i<=n){
        while(j<=i){
            printf(" * ");
            j++;
        }
        printf("\n");
        i++;
        j=1;
    }
    i=2;
    j=1;
    while(i<=n){
        while(j<=n-i+1){
            printf(" * ");
            j++;
        }
        printf("\n");
        i++;
        j=1;
    }
}