#include <stdio.h>
#include <stdint.h>

int main() {
    uint16_t reg = 0xABCD; // Given 16-bit register value

    // 1. Extract the lower 4 bits (bits 0-3)
    // Mask with 0x000F (binary 0000 0000 0000 1111) to isolate the lowest nibble.
    uint8_t lower_4_bits = reg & 0x0F;

    // 2. Extract the upper 4 bits of the lower byte (bits 4-7)
    // Shift right by 4 to move these bits to the lower position, then mask with 0x0F.
    uint8_t upper_4_bits_of_lower_byte = (reg >> 4) & 0x0F;

    // Print the extracted values in hexadecimal format
    printf("Original Register (0xABCD) in Binary: 1010 1011 1100 1101\n");
    printf("1. Lower 4 bits: 0x%X\n", lower_4_bits); // Expected: 0xD
    printf("2. Upper 4 bits of lower byte: 0x%X\n", upper_4_bits_of_lower_byte); // Expected: 0xA

    return 0;
}

