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
    unsigned int num;

    printf("Enter the number : ");
    scanf("%d",&num);


    printf("Two's compliment : "); displayBits(~num+1);


    int i,mask;

    for(i=0;i<=31;i++)
    {

        mask=1<<i;

        if((num&mask)!=0)
            break;

    }
//????????????????????????????????
    for(i=i+1;i<=31;i++)
    {

        mask=1<<i;
        num=num^mask;

    }

    printf("Twos compliment of the number is : ");
    displayBits(num);

    return 0;
}
