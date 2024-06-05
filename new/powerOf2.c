#include<stdio.h>
void displayBits(int x);
int main(int argc, char const *argv[])
{
    int num;

    printf("Enter the number to check whether it is power to 2 ?");
    scanf("%d",&num);

    int x= num;
    
    
    //This will consider 0 as power of 2
    //num = num&(num-1);

 


    if(num && !(num&(num-1)))
        printf("Number %d is exact power of 2\n",x);

    else
        printf("Number %d is NOT exact power of 2\n",x);


    return 0;
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