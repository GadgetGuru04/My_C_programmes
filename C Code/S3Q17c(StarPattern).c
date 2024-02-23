#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {

        for (int j = i; j < rows; j++) {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

