#include<stdio.h>

main(){
    int n,f; 
    scanf("%d",&n);
    f = fib(n);
    for(int i=0; i<n; i++){
        printf("%d ", fib(i));
    }
}

fib(int n){
    int f;
    if(n==0) return 0;
    else if(n==1){
        return 1;
    }
    else{
        f=fib(n-1)+fib(n-2);
    }
    return f;
}

