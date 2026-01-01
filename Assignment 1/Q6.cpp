#include <stdio.h>

// Function to swap two integers using XOR
void swapXOR(int *a, int *b) {
    if (a != b) { // Check to avoid issues if both pointers point to the same variable
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swapXOR(&x, &y);

    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

