/*#include <stdio.h>

int reverseInteger(int num) {
    int reversed = 0;

    while (num != 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    return reversed;
}

int main() {
    int number, reversedNumber;

    printf("Enter an integer: ");
    scanf("%d", &number);

    reversedNumber = reverseInteger(number);

    printf("The reversed number is: %d\n", reversedNumber);

    return 0;
}*/


#include<stdio.h>

    int main()
{
    int num, rev_num = 0;

    printf("Please enter your number: ");
    scanf("%d",&num);

    while(num != 0){
        rev_num = rev_num * 10 + (num % 10);
        num = num / 10;
    }

    printf("Reversed number would be: %d", rev_num);

    return 0;
}

