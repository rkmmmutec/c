#include <stdio.h>


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
 


}

int main(int argc, char const *argv[])
{

    unsigned int num=0x1254F;



    printf("Enter the number : ");
    scanf("%x",&num);
    bitPattern(num);
    return 0;
}
