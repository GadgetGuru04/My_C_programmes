#include <stdio.h>

// Function to find the factorial of a number using recursion
int factorial(int *num) {
    if (*num == 0 || *num == 1) {
        return 1;  // Factorial of 0 and 1 is 1
    } else {
        return *num * factorial(num - 1);  // Recursive case: n! = n * (n-1)!
    }
}

int main() {
    int num, result;

    // Input the number from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the input is non-negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the factorial function and display the result
        result = factorial(&num);
        printf("Factorial of %d is: %d\n", num, result);
    }

    return 0;
}

