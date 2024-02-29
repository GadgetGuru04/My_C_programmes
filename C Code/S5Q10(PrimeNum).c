#include <stdio.h>

int prime(int *num) {
    if (*num < 2) {
        return 0;
    }

    for (int i = 2; i <= *num / 2; ++i) {
        if (*num % i == 0) {
            return 0;
    }

    return 1;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = prime(&number);

    if (result) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

