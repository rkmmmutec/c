/*
Program to manipulate bits from position i to j in A NUMBER x.If i=2 and j=7
then the bits to be manipulated are 2nd,3rd,4th,6th,7th

*/




#include<stdio.h>

void displayBits(unsigned int x)
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
    
 int i ,j ;
 unsigned int x;

 printf("Enter the number :");
 scanf("%x",&x);

 printf("Enter the position from where to where we have to manipulate the bits (e.g 2,7): ");
 scanf("%d%d",&i,&j);

 unsigned int mask =  ~(~0<<(j-i+1))<<i  ;
 
    unsigned int num= x ;

    printf("\nX : "); displayBits(x);
  //To set the bit 

    x=x|mask;

    printf("Set : "); displayBits(x);
  
    x =num;
  //clear the bits

   x= x&~mask;
   printf("Clear : "); displayBits(x);

    x = num;
   //To invert

    x=x^mask;
    printf("Invert : "); displayBits(x);


    

 
    
    
    return 0;
}
