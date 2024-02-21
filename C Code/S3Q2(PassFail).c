#include <stdio.h>

int main() {
    double marks;


    printf("Enter the marks: ");
    scanf("%lf", &marks);


    if (marks < 33.0 && marks > 0.0) {
        printf("You are fail!.\n");
    } else if (marks > 33.0 && marks < 100.0) {
        printf("You are pass!.\n");
    } else if (marks == 33.0) {
        printf("You are just pass.\n");
    } else {
        printf("Invalid Input!");
    }

    return 0;
}
