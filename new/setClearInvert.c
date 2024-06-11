#include <stdio.h>

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
    int p,n,x; 

    //Setting the value of p and n

    p=7 , n=4;

    int mask = ~(~0<<n)<<(p-n+1);
    int y;
   
   

    printf("Enter the number : ");
    scanf("%d",&x);
    y=x;

    printf("Set %d: ",x);

    x=x|mask;

    displayBits(x);

    x=y;
    printf("Clear %d: ",x);

    x=x&~mask;

    displayBits(x);
   
    printf("Invert %d: ",x);

    x=x^mask;

    displayBits(x);


    return 0;
}
