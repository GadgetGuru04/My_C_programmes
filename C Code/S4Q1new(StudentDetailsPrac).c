#include <stdio.h>

int main() {

    char names[3][50];
    char branches[3][50];
    float total_marks[30];


    for (int i = 0; i < 10; ++i) {
        printf("Enter name for Student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter branch for Student %d: ", i + 1);
        scanf("%s", branches[i]);

        printf("Enter total marks for Student %d: ", i + 1);
        scanf("%f", &total_marks[i]);
        printf("\n");
    }

    printf("Student details:\n");
    printf("--------------------------\n");
    printf("Name\t\tBranch\t\tTotal Marks\n");
    printf("--------------------------\n");

    for (int i = 0; i < 10; ++i) {
        printf("%s\t\t%s\t\t%.2f\n", names[i], branches[i], total_marks[i]);
    }
    printf("--------------------------\n");

    return 0;
}
