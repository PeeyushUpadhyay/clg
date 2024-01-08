#include <stdio.h>

main(){
    int i=10; 
    int *j=&i;
    printf("%d\n", i);
    printf("%u\n", &i);
    printf("%d\n", *j);
}