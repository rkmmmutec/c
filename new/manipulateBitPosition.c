#include<stdio.h>

void displayBits(unsigned int num)
{
     int i;

    for(i=sizeof(num)*__CHAR_BIT__-1 ; i>=0; i--)
    {
        if(num&(1u<<i))
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
    int i,j;

    printf("Enter the numbers :");
    scanf("%x",&x);


    printf("Enter the [Position] from-to (e.g 2 7) : ");
    scanf("%d%d",&i,&j);

    displayBits(x);


    unsigned int mask = ~(~0<<j-i+1)<<i;


    unsigned int num ;

    num =x;

    x=x|mask;  //set

   printf("Set : "); displayBits(x);

    x=num;

    x=x&~mask;  //clear

   printf("Clear : "); displayBits(x);

    x=num;    

    x=x^mask; //invert

    printf("Invert : "); displayBits(x);
    

    return 0;
}