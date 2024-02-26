#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, c;
    printf("Enter a string: ");
    scanf("%s", str);

    len = 0;
    while (str[len] != '\0') {
        len++;
    }

    printf("The Reversed String is: ");

    for (c = len - 1; c >= 0; c--) {
        printf("%c", str[c]);
    }

    return 0;
}
