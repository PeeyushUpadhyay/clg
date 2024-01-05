#include <stdio.h>

int main() {
    float totalMarks, obtainedMarks, percentage;

    printf("Enter the total marks: ");
    scanf("%f", &totalMarks);

    printf("Enter the obtained marks: ");
    scanf("%f", &obtainedMarks);

    percentage = (obtainedMarks / totalMarks) * 100;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 75) {
        printf("Division: Distinction\n");
    } else if (percentage >= 60) {
        printf("Division: First\n");
    } else if (percentage >= 45) {
        printf("Division: Second\n");
    } else if (percentage >= 33) {
        printf("Division: Third\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}
