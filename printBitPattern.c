// #include<stdio.h>

// int main(int argc, char const *argv[])
// {
    
//     int x=0x1254F

    


//     return 0;
// }


#include <stdio.h>

void printBitPattern(unsigned int num) {
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
}

int main() {
    unsigned int num = 0x1254F;
printf("sizeof(num)=%ld\n",sizeof(num));
    printf("Bit pattern of 0x1254F: ");
    printBitPattern(num);
    printf("\n");

    return 0;
}



//--------------------------
//from Left to right ===>>> code will not work , it will print in reverse order LSB <=> MSB


// void bitPattern2(unsigned int num)
// {

//     int i;

//   printf("\n");
//   printf("BIT PATTERN : ");

//   for(i=0;i<=((sizeof(num)*8))-1;i++)
//   {


//     if(num & (1u<<i))
//         printf("1");

//     else
//         printf("0");


//     if(i%4==0)
//         printf(" ");
      

//   }

//}

void displayBis






int main(int argc, char const *argv[])
{
    
    
    int x =12345;

    displayBits(x);

    return 0;
}
