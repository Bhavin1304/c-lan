#include <stdio.h>

// Function to find length of string using pointer
int stringLength(const char *str) {
    int length = 0;

    // Move pointer forward until null character is found
    while (*str != '\0') {
        length++;
        str++;   // move pointer to next character
    }

    return length;
}

int main() {
    char *text = "hello bhavin";

    int len = stringLength(text);

    printf("String: %s\n", text);
    printf("Length of string: %d\n", len);

    return 0;
}

