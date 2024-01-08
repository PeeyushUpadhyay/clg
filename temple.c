#include <stdio.h>
int i, j, k, n = 17;
void flag(){
    for (i = 1; i <= (n / 2)+1; i++)
    {
        for(j=1; j<=n-1; j++){
            printf("   ");
        }
        for (k=1; k<=i; k++){
            printf(" * ");
        }
        printf("\n");
    }
}

void stick(){
    for (i = 1; i <= (n / 2)+1; i++){
        for(j=1; j<=n-1; j++){
            printf("   ");
        }
        for (k=1; k<=1; k++){
            printf(" * ");
        }
        printf("\n");
    }
}

void temptop(){
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf("   ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}

void tempmid(){
        for (i = 1; i <= n / 2; i++)
    {
        for (j = 1; j <= n * 2 - 1; j++)
        {
            printf(" + ");
        }
        printf("\n");
    }
}

void templow(){
    for (i = 1; i <= n / 2; i++)
    {
        templowall();
        tempdoor();
        templowall();
        printf("\n");
    }
}

void templowall(){
    for (j = 1; j <= (2 * n - 1) / 2 - 1; j++)
        {
            printf(" + ");
        }
}

void tempdoor(){
    for (j = (2 * n - 1) / 2; j <= (2 * n - 1) / 2 + 2; j++)
        {
            printf("   ");
        }
}

void pthf(){
   for(i=1; i<=n; i++)
    {
        for(int j = 1; j<=n;j++)printf(" ");
        for(j=1; j<=n - i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=2*n-1; j++)
        {
            if(j==1 || j==2*n-2)
            printf("*");
            else printf(" ");
        }

        printf("\n");
    }
}


main(){
    flag();
    stick();
    temptop();
    tempmid();
    templow();
    pthf();
}