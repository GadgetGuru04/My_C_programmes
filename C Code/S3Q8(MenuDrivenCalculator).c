#include <stdio.h>

int main() {
    int ch, num1, num2, ans;

    printf("Please enter your two numbers : \n");
    scanf("%d %d", &num1, &num2);

    printf("Please enter your choice : \n");
    printf("1. Addition. \n");
    printf("2. Subtraction. \n");
    printf("3. Multiplication. \n");
    printf("4. Division. \n");
    scanf("%d",&ch);

switch (ch)
{
    case 1 : ans = num1 + num2;
    printf("%d + %d = %d", num1, num2, ans);
    break;

    case 2 : ans = num1 - num2;
    printf("%d - %d = %d", num1, num2, ans);
    break;

    case 3 : ans = num1 * num2;
    printf("%d * %d = %d", num1, num2, ans);
    break;

    case 4 : ans = num1 / num2;
    printf("%d / %d = %d", num1, num2, ans);
    break;

    default : printf("Please enter a correct value!");
}

    return 0;
}
