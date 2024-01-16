#include<stdio.h>

main(){
    int i;
    char a[10];
    printf("Enter the password of 6 char");
    for(i=0; i<=5; i++){
        a[i]=getchar();
        printf("*");
    }
    a[i]="\0";
    printf("\n Password is : %s", a);
}