#include<stdio.h>

main(){
    int arr[5];
    for( int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nUnsorted Array \n");
    for( int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[i]>arr[j]){
                int temp;
                temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printf("\nSorted Array \n");
    for( int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
}