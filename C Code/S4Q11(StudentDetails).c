#include <stdio.h>

struct student_record {
    char name[50];
    char branch[50];
    float total_marks;
};

int main() {NN
    struct student_record students[10];

    printf("Enter details of 10 students:\n");

    for (int i = 0; i < 10; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name, branch, and total marks obtained: ");
        scanf("%s %s %f", students[i].name, students[i].branch, &students[i].total_marks);
    }

    printf("\nDetails of the 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\nBranch: %s\nTotal marks obtained: %.2f\n",
               students[i].name, students[i].branch, students[i].total_marks);
    }

    return 0;
}
