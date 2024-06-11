#include<stdio.h>

int countSetBit4(unsigned x);

void displayBits(int x);

int main(int argc, char const *argv[])
{
    unsigned int x;
    printf("Enter the number : ");
    scanf("%d",&x);

   int count = countSetBit4(x);    

   printf("Count Set Bit : %d\n",count);


    return 0;
}



int table[]= {0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};


int countSetBit4(unsigned x)
{
    int count =0;

    while(x!=0)
    {
        count = count + table[x&0xF];
        x=x>>4;

    }

return count;


}


void displayBits(int x)
{
    int i;

    for(i= sizeof(int)*__CHAR_BIT__-1 ; i>=0 ; i--)
    {

        if(x & (1u<<i))
            printf("1");

        else
            printf("0");


        if(i%8==0)
            printf(" ");

    }

    printf("\n");

}