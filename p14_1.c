#include<stdio.h>

void displayBits(int x);

int main(void)
{
    int a, b;
    
    printf("Enter the value of a and b in hexadecimal : ");
    scanf("%x,%x", &a, &b);

    printf("a=%X\n", a);   
    displayBits(a);

    printf("b=%X\n", b);   
    displayBits(b);

    printf("a&b=%X\n", a & b); 
    displayBits(a & b);
    
    printf("a|b=%X\n", a | b);  
    displayBits(a | b);
    
    printf("a^b=%X\n", a ^ b);  
    displayBits(a ^ b);

    printf("~a=%X\n", ~a);   
    displayBits(~a);

    printf("~b=%X\n", ~b);   
    displayBits(~b);

    return 0;
}

// void displayBits(int x) {
//     // Size of int in bytes
//     int size = sizeof(int);
    
//     // Number of bits in an int
//     int totalBits = size * 8;

//     // Loop through each bit position
//     for (int i = totalBits - 1; i >= 0; i--) {
//         // Check the value of the bit at position i
//         int bit = (x >> i) & 1;
//         printf("%d", bit);
        
//         // Add space for better readability
//         if (i % 4 == 0)
//             printf(" ");
//     }
//     printf("\n");
// }


void displayBits(int num) {
    int i;
    // Start from the most significant bit and go down to the least significant bit

   // printf("---sizeof(%X)=%ld\n",num,sizeof(num));

    for (i = sizeof(num) * 8 - 1; i >= 0; i--) {
        // Check if the i-th bit is set or not
        if (num & (1u << i))                     
            printf("1");
        else
            printf("0");

        // Add a space for better readability, adjust as needed
        if (i % 4 == 0)
            printf(" ");
    }

     printf("\n");

}