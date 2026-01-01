#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t value = 5;  // binary: 0000 0101

    // 1. Left shift the value by 2 positions
    uint8_t leftShifted = value << 2;

    // 2. Right shift the original value by 1 position
    uint8_t rightShifted = value >> 1;

    printf("Original value      : %u (0x%02X)\n", value, value);
    printf("After left shift << 2: %u (0x%02X)\n", leftShifted, leftShifted);
    printf("After right shift >> 1: %u (0x%02X)\n", rightShifted, rightShifted);

    return 0;
}

