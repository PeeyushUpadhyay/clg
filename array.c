#include <stdio.h>

main(){
    int a=100,b=20;
    int add = add(&a,&b);
    int sub = sub(&a,&b);
    int mul = mul(&a,&b);
    int div = div(&a,&b);
    printf("%d \n", add);
    printf("%d \n", sub);
    printf("%d \n", mul);
    printf("%d \n", div);
}

int add(int ){
    
}