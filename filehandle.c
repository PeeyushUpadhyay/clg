#include<stdio.h>

main(){
    char ch;
    FILE *fp;
    fp = fopen("/home/babayaga/Documents/Projects/Clg assignment/Ram.txt","w");
    while(ch!='9'){
        scanf("%c",&ch);
        fputc(ch,fp);
    }
    fclose(fp);
    ch=' ';
    fp=fopen("Ram.txt","r");
    while(ch!='9'){
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}