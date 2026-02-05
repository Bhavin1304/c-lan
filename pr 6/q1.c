#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find length manually
    while (str[length] != '\0') {
        length++;
    }

    // Compare characters from start and end
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}

