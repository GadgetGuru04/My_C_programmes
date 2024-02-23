#include <stdio.h>

int main() {
    // Initialize variables
    int lower_limit = 100;
    int upper_limit = 200;
    int divisor = 5;
    int sum = 0;

    // Iterate through the range and add numbers divisible by 5 to the sum
    for (int i = lower_limit; i < upper_limit; i++) {
        if (i % divisor == 0) {
            sum += i;
        }
    }

    // Display the result
    printf("The sum of integers greater than %d and less than %d, divisible by %d is: %d\n", lower_limit, upper_limit, divisor, sum);

    return 0;
}
