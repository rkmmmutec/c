
//In x the n bits starting at position p are replace by the rightmost n bits of y.

#include<stdio.h>

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


unsigned int replace(unsigned int x, unsigned int y, int p, int n)
{

    unsigned int mask = ~(~0<<n)<<(p-n+1);

    x=x&~mask; //to clear the position  P-N

    y=y<<(p-n+1);

    y=y&mask; //To extract the bits P-N

    unsigned num = x|y;

//mask = ~(~0<<n)<(p-n+1);
// return (x&~mask) | ((y<<(p-n+1))&mask)



    return num;




}



int main(int argc, char const *argv[])
{

    unsigned int x,y;
    int p,n;

    printf("enter two numbers : ");
    scanf("%x%x",&x,&y); 

    printf("Enter position p and number of bits n : ");
    scanf("%d%d",&p,&n);
    

   unsigned int num =  replace(x,y,p,n);

   printf("X:"); displayBits(x);
   printf("Y:"); displayBits(y);

   printf("N: %x : \n",num); displayBits(num); 




    return 0;


}
