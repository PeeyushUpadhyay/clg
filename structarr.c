#include <stdio.h>

struct stud
{
    int roll;
    char name[20];
    int age;
    int marks[3];
};

main()
{
    char *subjects[] = {"maths", "science", "hindi"};
    struct stud s1;
    printf("Enter entry of first student\n");
    printf("Enter Roll no.\n");
    scanf("%d", &s1.roll);
    printf("Enter Name\n");
    scanf("%s", &s1.name);
    printf("Enter Age\n");
    scanf("%d", &s1.age);
    printf("Enter Marks\n");
    for (int i = 0; i < 3; i++)
    {   
        printf("%s : ", subjects[i]);
        scanf("%d", &s1.marks[i]);
    }
    printf("\n***************Student Info ***************** \n");

    printf("Name  : %s \n", s1.name);
    printf("Age  : %d \n", s1.age);
    printf("Roll No  : %d \n", s1.roll);
    printf("Marks  : \n");
    for (int i = 0; i < 3; i++)
    {   
        printf("%s : ", subjects[i]);
        printf("%d \n", s1.marks[i]);
    }
}
