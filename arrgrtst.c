#include <stdio.h>

main(){
    int g=0, arr[5];
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
        if(arr[i]>g){
            g=arr[i];
        }
    }
    printf("Greatest value : %d", g);
}