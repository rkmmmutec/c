#include<stdio.h>

void displayBits(int x);

int main(int argc, char const *argv[])
{
    int x ; 

    printf("Enter Integer : ");
    scanf("%d",&x);

    displayBits(x);


    return 0;
}


// void displayBits(int x)
// {

//     int i , mask;

//     for(i=31 ; i>=0 ; i--)
//     {

//         mask= 1<<i;

//         putchar((x&mask) ?'1' : '0');

//         if(i%8 == 0)
//             putchar(' ');



//     }

// printf("\n");

// }
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