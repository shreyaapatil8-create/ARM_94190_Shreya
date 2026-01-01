#include <stdio.h>

// Function to check even parity and set MSB if needed
unsigned char setEvenParity(unsigned char byte) {
    unsigned char copy = byte;
    int count = 0;

    // Count number of 1 bits in the lower 7 bits
    for (int i = 0; i < 7; i++) {
        if (copy & 1)
            count++;
        copy >>= 1;
    }

    // If count of 1s is odd, set MSB (bit 7) to 1 to make overall parity even
    if (count % 2 != 0) {
        byte |= (1 << 7);  // Set MSB
    } else {
        byte &= ~(1 << 7); // Clear MSB otherwise
    }

    return byte;
}

int main() {
    unsigned int input;
    printf("Enter an 8-bit number (0–255): ");
    scanf("%u", &input);

    unsigned char result = setEvenParity((unsigned char)input);

    printf("Byte with even parity: 0x%02X\n", result);
    return 0;
}

