#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - i; j++) {
            printf("%c", 'A' + j);

        }
        printf("\n");
    }

    return 0;
}
