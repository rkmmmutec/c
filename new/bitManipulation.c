#include<stdio.h>

void bitPattern(unsigned int num)
{

    int i=0;

    printf("Size of number in bits : %ld\n",sizeof(num)*__CHAR_BIT__);

 for (i=sizeof(num)*8-1;i>=0;i-- )
 {
    if(num & (1u<<i))
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
    int a, mask, bitPosition, bit;



    printf("Enter an integer : ");
    scanf("%d",&a);

    printf("Enter the bitPosition position :");
    scanf("%d",&bitPosition);

    mask = 1<<bitPosition;

    if((a&mask)==0)
        bit=0;

    else
        bit =1;


    printf("The bit at position %d is %d  ",bitPosition,bit);

    return 0;
}
