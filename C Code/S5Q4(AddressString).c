#include <stdio.h>

int main() {

    char *myString = "Deb!";

    for (char *ptr = myString; *ptr != '\0'; ptr++) {
        printf("Address: %p, Character: %c\n", ptr, *ptr);
    }
}

