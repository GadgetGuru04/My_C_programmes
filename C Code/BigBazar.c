#include <stdio.h>

int main() {
    double avgAmount;
    int times;

    printf("Enter the average amount spent at Big Bazar in a month: ");
    scanf("%lf", &avgAmount);

    printf("Enter the number of times visited Big Bazar in a month: ");
    scanf("%d", &times);

    double anlAmount = avgAmount * times * 12;

    printf("Average amount spent per year at Big Bazar: $%.2lf\n", anlAmount);

    printf("Update");
    return 0;
}
