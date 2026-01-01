#include <stdio.h>
#include <ctype.h>  // for isalpha()

// Function to check alphabet and XOR with 32 if it is
void checkAndXor32(char ch) {
    if (isalpha(ch)) {  // check if alphabet
        printf("'%c' is an alphabet.\n", ch);

        // Perform XOR with 32
        char toggled = ch ^ 32;
        printf("After XOR with 32: '%c'\n", toggled);
    } else {
        printf("'%c' is NOT an alphabet.\n", ch);
    }
}

int main() {
    char input;

    printf("Enter a character: ");
    scanf(" %c", &input);

    checkAndXor32(input);

    return 0;
}

