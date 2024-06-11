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
    unsigned int x,y;
    int p,n;

    printf("Enter two numbers :");
    scanf("%x%x",&x,&y);


    printf("Enter the [Position]&[Number of bits] : ");
    scanf("%d%d",&p,&n);

    displayBits(x);
    displayBits(y);

    unsigned int mask = ~(~0<<n)<<(p-n+1);


    unsigned int num = (x&~mask) | (y&mask);

    printf("After replacing bits of Y in X : %x\n ",num);

    displayBits(num);
    




    return 0;
}
