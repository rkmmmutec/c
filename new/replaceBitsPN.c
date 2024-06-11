
/*Given two numbers x and y,write a function that returns 
x such that n bit starting at position p in x are replaced by the  
n bits starting at position p of y.
*/
#include<stdio.h>

unsigned int replace(unsigned int x ,unsigned int y , int p , int n )
{

    unsigned int mask = ~(~0<<n)<<(p-n+1);
    x=x & ~mask;  // to clear the bits p-n
    y=y & mask; //Extract the bit p-n

    unsigned int num = x|y;
    
    // unsigned mask = ~(~0<<n) << p-n+1;
    // return (x&~mask) | (y&mask);

return num;

}


void displayBits(int x)
{
    int i;

    for(i=sizeof(x)*__CHAR_BIT__ -1 ; i>=0 ; i--)
    {

       if(x&(1u<<i))
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

    unsigned int x,y;
    int p,n;

    printf("enter two numbers : ");
    scanf("%x%x",&x,&y); 

    printf("Enter position p and number of bits n : ");
    scanf("%d%d",&p,&n);

    //p=7,n=4, x=0x23173b4 , y= 0x557;

    unsigned int num = replace(x, y, p, n );



    printf("x : "); displayBits(x);
    printf("y : "); displayBits(y);
    printf("N : "); displayBits(num);

   
  
    return 0;
}

