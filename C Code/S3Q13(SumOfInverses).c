#include <stdio.h>

int main() {
    int num;
    double sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i) {
        sum += 1.0 / i;
    }

    printf("The sum is: %.2f\n", sum);

    return 0;
}
