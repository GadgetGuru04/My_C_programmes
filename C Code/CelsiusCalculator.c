#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = 1.8 * celsius + 32;

    // Display the result
    printf("%.2f degrees celsius is equal to %.2f degrees fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
