#include <stdio.h>

int main() {

    int num[10];
    int i;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 10; i++) {
        if (num[i] % 2 == 0) {
            printf("%d is even.\n", num[i]);
        } else {
            printf("%d is odd.\n", num[i]);
        }
    }

    return 0;
}
