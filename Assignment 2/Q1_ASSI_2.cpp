#include <stdio.h>
#include <stdint.h>

// helper to print 8-bit binary
void print_binary(uint8_t x) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
    }
}

int main(void) {
    uint8_t reg = 0x2A; // 0010 1010

    printf("Original:  0x%02X   ", reg);
    print_binary(reg);
    printf("\n");

    // 1. Set bit 4
    reg |= (1 << 4); // sets the 5th bit from right
    printf("Set bit 4: 0x%02X   ", reg);
    print_binary(reg);
    printf("\n");

    // 2. Clear bit 1
    reg &= ~(1 << 1);
    printf("Clear bit 1:0x%02X   ", reg);
    print_binary(reg);
    printf("\n");

    // 3. Toggle bit 5
    reg ^= (1 << 5);
    printf("Toggle bit 5:0x%02X ", reg);
    print_binary(reg);
    printf("\n");

    return 0;
}

