#include <stdio.h>

int main() {
    double m, km;

    printf("Enter the length of the road in meters: ");
    scanf("%lf", &m);

    km = m / 1000;

    printf("The length of the road in kilometers: %.2lf\n", km);

    return 0;
}
