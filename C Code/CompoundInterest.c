#include <stdio.h>
#include <math.h>

void main()
{
    double p, r, t, result;
    int n;

    printf("Enter the principal amount: ");
    scanf("%lf", &p);

    printf("Enter the annual interest rate: ");
    scanf("%lf", &r);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    printf("Enter the number of years: ");
    scanf("%lf", &t);

    result = p * pow(1 + (r / n), n * t);

    printf("The compound interest is: %.2lf\n", result);

    return 0;
}
