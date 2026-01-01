#include <stdio.h>
unsigned int countSetBits(unsigned int n) {
    unsigned int count = 0;
    while (n) {
        n &= (n - 1); 
        count++;
    }
    return count;
}

int main() {
    int num;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    unsigned int unsignedNum = (unsigned int) num;

    unsigned int result = countSetBits(unsignedNum);
    printf("Number of 1 bits in %d is: %u\n", num, result);

    return 0;
}

