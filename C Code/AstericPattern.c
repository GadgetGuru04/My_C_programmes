#include <stdio.h>

int main() {
    int rows = 5;

    // Pattern 1: Five asterisks
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    

    return 0;
}
