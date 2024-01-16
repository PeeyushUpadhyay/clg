#include <stdio.h>

struct stud
{
    int roll;
    char name[20];
    int age;
};

main()
{
    struct stud s[3];
    printf("Enter the details of 3 students, \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Roll no.\n");
        scanf("%d", &s[i].roll);
        printf("Enter Name\n");
        scanf("%s", &s[i].name);
        printf("Enter Age\n");
        scanf("%d", &s[i].age);
    }

    printf("\n***************Students Info ***************** \n");

    for (int i = 0; i < 3; i++)
    {
        printf("\n%d Student info: \n", i+1);
    printf("Roll No  : %d \n", s[i].roll);
    printf("Name  : %s \n", s[i].name);
    printf("Age  : %d \n", s[i].age);
    printf("\n");
    }
}