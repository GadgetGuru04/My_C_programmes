#include <stdio.h>

void main() {
    int num;

    // Input from user
    printf("Please enter your number : ");
    scanf("%d", &num);

    // Check if the number is divisible by 2
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0;
}
