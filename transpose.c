#include <stdio.h>

main(){
    int i,j, n=3, arr[3][3], t[3][3]; 

    //array
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
        printf("\n");
    }
    printf("\n");

    //transpose
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            t[i][j]=arr[j][i];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }    

}