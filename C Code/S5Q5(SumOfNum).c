#include<stdio.h>

int sum(int n) {
    int sum = 0;
    for (int i = n; i > 0; i--) {
        sum += i;
    }
    return sum;
}

int main() {
    int in;
    printf("Enter the value up to which you wish to calculate: ");
    scanf("%d", &in);

    printf("%d is the required result.", sum(in));

    return 0;
}
