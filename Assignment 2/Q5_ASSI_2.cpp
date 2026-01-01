#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t reg = 0xAA; // 1010 1010

    printf("Before modification: 0x%02X\n", reg);

    // 1. Read bits 2 to 4
    uint8_t mask = (0x07 << 2);      // (0b111 << 2) = 0b00011100
    uint8_t extracted = (reg & mask) >> 2;

    printf("Extracted bits 2–4: 0x%X\n", extracted);

    // 2. Write the value 0b011 into bits 2–4
    uint8_t value = 0b011;           // new 3-bit value

    // Clear bits 2–4 in reg
    reg = reg & ~mask;

    // Set bits 2–4 to new value
    reg = reg | (value << 2);

    printf("After modification:  0x%02X\n", reg);

    return 0;
}

