#include <stdio.h>

main(){
    int a,b;
    a=10; 
    b=20;
    printf("before swapping : \n");
    printf("a : %d \n", a);
    printf("b : %d \n", b);
    swap(&a,&b);
    printf("after swapping : \n");
    printf("a : %d \n", a);
    printf("b : %d \n", b);
}

swap(int *a, int *b){
    int x;
    x=*a;
    *a=*b;
    *b=x;
}