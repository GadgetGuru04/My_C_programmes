# include <stdio.h>

void main ()
{
    double L, ml, G;

    printf("Enter the amount of Milk in litres : ");
    scanf("%lf",&L);

    ml = L * 1000;
    G = L * 0.264172;


    printf("%.2f liters is equal to %.2f milliliters\n", L, ml);
    printf("%.2f liters is equal to %.2f gallons\n", L, G);

    return 0;

}
