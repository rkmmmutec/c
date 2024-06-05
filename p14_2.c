#include <stdio.h>

void printBitPattern(int num) {
    int i;
    // Start from the most significant bit and go down to the least significant bit

   // printf("---sizeof(%X)=%ld\n",num,sizeof(num));

    printf("Number : %d\t",num);


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

int main() {
    
    int a=7; 
    printBitPattern(a);

    a=a<<2;
    printBitPattern(a);
    
    a=a<<3;
    printBitPattern(a);

    a=a>>1;
    printBitPattern(a);

    a=a>>3;
    printBitPattern(a);

    printf("\n");

    return 0;
}


//$ ./p14_2
//Number : 7      0000 0000 0000 0000 0000 0000 0000 0111 
//Number : 28     0000 0000 0000 0000 0000 0000 0001 1100 
//Number : 224    0000 0000 0000 0000 0000 0000 1110 0000 
//Number : 112    0000 0000 0000 0000 0000 0000 0111 0000 
//Number : 14     0000 0000 0000 0000 0000 0000 0000 1110
