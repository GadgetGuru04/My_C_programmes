#include <stdio.h>

int fac(int *num);

int main() {
    int number, result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = fac(&number);

        printf("Factorial of %d = %d.\n", number, result);
    }

    return 0;
}

int fac(int *num) {

    if (*num == 0 || *num == 1) {
        return 1;
    } else {

        return *num * fac(--*num);
    }
}
