#include <stdio.h>

struct student_record {
    char name[50];
    char branch[50];
    float total_marks;
};

int main() {

    struct student_record students[10];

    printf("Enter details for 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter branch: ");
        scanf("%s", students[i].branch);

        printf("Enter total marks obtained: ");
        scanf("%f", &students[i].total_marks);
    }

    printf("\nStudent details:\n");
    printf("---------------------------------------------------\n");
    printf(" %-20s | %-20s | %-15s\n", "Name", "Branch", "Total Marks");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < 10; ++i) {
        printf(" %-20s | %-20s | %-15.2f\n", students[i].name, students[i].branch, students[i].total_marks);
    }
    printf("---------------------------------------------------\n");

    return 0;
}
