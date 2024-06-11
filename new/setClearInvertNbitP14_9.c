//To SET, CLEAR, INVERT nbits starting from position p in a number x.


#include<stdio.h>


void displayBits(int x)
{
    int i;

    for(i= sizeof(int)*__CHAR_BIT__-1 ; i>=0 ; i--)
    {

        if(x & (1u<<i))
            printf("1");

        else
            printf("0");


        if(i%8==0)
            printf(" ");

    }

    printf("\n");

}

int main(int argc, char const *argv[])
{
    
    unsigned int x;

    int p,n;

    printf("Enter the number : ");
    scanf("%x",&x);

    int num = x;

    printf("Enter the position : ");
    scanf("%d",&p);
    printf("Enter number of bits : ");
    scanf("%d",&n);

    int mask = ~(~0<<n) << p-n+1;
    displayBits(mask); 
    printf("\n");
    displayBits(x);
    
     //Set the number 

     x=x|mask;
//After setting the bits as entered 
     printf("After Setting the bits : ");
     displayBits(x);



//After clearing

    x=num;
    printf("\nAfter clearing the bits : ");
    x= x&~mask;
    displayBits(x);

//After inverting the bits 

    x=num;
    printf("After inverting the bits : ");
    x=x^mask;
    displayBits(x);






    return 0;
}
