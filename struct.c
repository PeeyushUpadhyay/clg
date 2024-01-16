#include <stdio.h>

struct stud
{
    int roll;
    char name[20];
    int age;
};

main(){
    struct stud s1, s2, s3;
    printf("Enter entry of first student\n");
    printf("Enter Roll no.\n");
    scanf("%d",&s1.roll);
    printf("Enter Name\n");
    scanf("%s",&s1.name);
    printf("Enter Age\n");
    scanf("%d",&s1.age);
}
