#include <stdio.h>
#include <string.h>
#include <stdlib.h>
main()
{
    char a[10];
    int i;
    printf("enter the string of 4 char\n");
    for(i=0; i<=3; i++)
{
    a[i]=getc(stdin);

}
    a[i]="\0";
    printf("\n Output \n");

    for (i=0; i<=3; i++){
        putc(a[i],stdout);
    }
}