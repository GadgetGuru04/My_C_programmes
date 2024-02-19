#include <stdio.h>

int main() {
    // Define variables to store employee data
    float basic, da, hra, ma, pf, gross, net;

    // Input employee's basic salary
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    // Calculate other components
    da = 0.10 * basic;   // 10% of basic
    hra = 0.075 * basic; // 7.5% of basic
    ma = 300;            // Fixed medical allowance
    pf = 0.125 * basic;  // 12.5% of basic

    // Calculate gross and net salary
    gross = basic + da + hra + ma;
    net = gross - pf;

    // Print the pay slip
    printf("Pay Slip\n");
    printf("Basic Salary: %.2f\n", basic);
    printf("Dearness Allowance (Da): %.2f\n", da);
    printf("House Rent Allowance (Hra): %.2f\n", hra);
    printf("Medical Allowance (Ma): %.2f\n", ma);
    printf("Provident Fund (Pf): %.2f\n", pf);
    printf("Gross Salary: %.2f\n", gross);
    printf("Net Salary: %.2f\n", net);

    return 0;
}
