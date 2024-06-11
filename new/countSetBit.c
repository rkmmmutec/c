#include<stdio.h>


int displayBits(int x)
{
    int i, count=0;

    for(i= sizeof(int)*__CHAR_BIT__-1 ; i>=0 ; i--)
    {

        if(x & (1u<<i))
            {
                printf("1");
                count ++;

            }
        else
            printf("0");


        if(i%8==0)
            printf(" ");

    }

    printf("\n");

    return count;

}


int countUsingMask(int x)
{

int count =0;

for(int i= sizeof(x)*__CHAR_BIT__ -1 ; i>=0 ; i-- )
{

  int mask = 1<<i;

  if((x&mask) != 0)
    count++;


}

return count ;


}

int main(int argc, char const *argv[])
{

    unsigned int x=0;

    printf("Enter the number to count the bit : ");
    scanf("%d",&x);

    int count = displayBits(x);    

    printf("Number of 1's in number %x is %d \n",x,count);
    printf("MAsk : Number of 1's in number %x is %d \n",x,countUsingMask(x));
 

    return 0;
}
