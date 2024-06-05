#include<stdio.h>

void bitPattern(unsigned int num)
{

    int i=0;
 for(i=sizeof(num)*__CHAR_BIT__ -1 ; i>=0 ; i-- )
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
    
    unsigned int x=0 , y=0;
    printf("Enter two number : ");
    scanf("%x%x",&x,&y);

    printf("Bit pattern of %x : \n",x); bitPattern(x);
    printf("Bit pattern of %x : \n",y); bitPattern(y);
    printf("Bit pattern of %x and %x : \n",x,y); bitPattern(x&y);
    printf("Bit pattern of %x | %x : \n",x,y); bitPattern(x|y);
    printf("Bit pattern of %x ^ %x : \n",x,y); bitPattern(x^y);
    printf("Bit pattern of ~%x : \n",x); bitPattern(~x);
    printf("Bit pattern of ~%x  : \n",y); bitPattern(~y);

    return 0;
}
