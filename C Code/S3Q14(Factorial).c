 #include <stdio.h>

int main() {
    int num;
    double fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i) {
        fact = fact*i;
    }

    printf("The factorial of %d is: %.2lf\n", num,fact);

    return 0;
}

