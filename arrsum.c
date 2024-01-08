#include <stdio.h>

main(){
    int arr[10], s=0;
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
        s=s+arr[i];
    }
    printf("%d \n", s);
}