#include <stdio.h>

int main() {
    double km;

    printf("Enter distance in km: ");
    scanf("%lf", &km);

    double m = km * 1000;
    double cm = km * 100000;
    double feet = km * 3280.84;
    double inches = km * 39370.1;

    printf("Distance in meters: %.2lf\n", m);
    printf("Distance in centimeters: %.2lf\n", cm);
    printf("Distance in feet: %.2lf\n", feet);
    printf("Distance in inches: %.2lf\n", inches);

    return 0;
}
