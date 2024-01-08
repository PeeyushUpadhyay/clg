#include <stdio.h>

main(){
    int i,j, n=3, arr[3][3], arrr[3][3], sum[3][3];

    //first array
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //second array
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &arrr[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", arrr[i][j]);
        }
        printf("\n");
    }

    //sum
    printf("Sum \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            sum[i][j]=arr[i][j]+arrr[i][j];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
