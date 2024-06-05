#include <stdio.h>

void printBitPattern(unsigned int num) {
    int i;

    printf("Bit pattern: ");
    for (i = 0; i < sizeof(num) * 8; i++) {
        if (num & (1u << i))
            printf("1");
        else
            printf("0");

        // Add a space for better readability, adjust as needed
        if ((i + 1) % 4 == 0 && i != (sizeof(num) * 8 - 1))
            printf(" ");
    }
    printf("\n");
}

int main() {
    unsigned int num = 0x1254F;

    printf("Size of num: %ld\n", sizeof(num));
    printf("Bit pattern of 0x1254F: ");
    printBitPattern(num);

    return 0;
}
