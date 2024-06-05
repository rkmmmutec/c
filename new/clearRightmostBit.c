#include<stdio.h>

void bitPattern(int n);

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);
    
    num= num&(num-1);

    bitPattern(num);


    return 0;
}


void bitPattern(int num)
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