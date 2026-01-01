#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint16_t reg = 0xABCD;

    // 1. Extract the lower 4 bits
    uint16_t lower4 = reg & 0x000F;

    // 2. Extract the upper 4 bits of the lower byte
    uint16_t upper4_of_lowbyte = (reg & 0x00F0) >> 4;

    printf("Lower 4 bits: 0x%X\n", lower4);
    printf("Upper 4 bits of lower byte: 0x%X\n", upper4_of_lowbyte);

    return 0;
}

