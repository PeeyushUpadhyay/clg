#include <stdio.h>

main(){
    int a=20, b=61;
    int w = add(&a,&b);
    int x = sub(&a,&b);
    int y = mul(&a,&b);
    int z = div(&a,&b);

    printf("Sum : %d \n", w);
    printf("Difference : %d \n", x);
    printf("Product : %d \n", y);
    printf("Quotient : %d \n", z);
}

int add(int *a, int *b){
    return (*a) + (*b);
}

int sub(int *a, int *b){
    return (*a) - (*b);
    
}
int mul(int *a, int *b){
    return (*a) * (*b);

}
int div(int *a, int *b){
    return (*a) / (*b);

}