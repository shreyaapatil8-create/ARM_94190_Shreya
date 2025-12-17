#include <stdio.h>
#include <stdint.h>
void printBinary(uint8_t num) // Function to print binary of an 8-bit number
{
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
    }
}

int main()
{
    uint8_t reg = 0x2A;   // 0010 1010

    printf("Initial value:\n");
    printf("Hex: 0x%02X\nBinary: ", reg);
    printBinary(reg);
    printf("\n\n");

    // 1. Set bit number 4
    reg = reg | (1 << 4);
    printf("After setting bit 4:\n");
    printf("Hex: 0x%02X\nBinary: ", reg); //0011 1010
    printBinary(reg);
    printf("\n\n");

    // 2. Clear bit number 1
    reg = reg & ~(1 << 1);
    printf("After clearing bit 1:\n");
    printf("Hex: 0x%02X\nBinary: ", reg);//0011 1000
    printBinary(reg);
    printf("\n\n");

    // 3. Toggle bit number 5
    reg = reg ^ (1 << 5);
    printf("After toggling bit 5:\n");
    printf("Hex: 0x%02X\nBinary: ", reg); //0001 1000
    printBinary(reg);
    printf("\n");

    return 0;
}

