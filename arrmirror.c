#include<stdio.h>

main(){
    int i, j, n=3, arr[3][3] ;

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("|| ");
        for(j=n-1;j>=0; j--){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");


}