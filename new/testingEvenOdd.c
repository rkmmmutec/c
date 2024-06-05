#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int mask = 0x1;
    int num;


    printf("Enter the number : ");
    scanf("%d",&num);


    if((num & mask) == 0)
        printf("Number is Even\n");

    else
        printf("Number is Odd\n");    


    return 0;
}
