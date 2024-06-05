#include <stdio.h>

void displayBits(int);


int main(int argc, char const *argv[])
{
    
    int a= 7;
    printf("a=%d\t",a); displayBits(a);

    a=a<<2;
    printf("a=%d\t",a); displayBits(a);

    a=a<<3;
    printf("a=%d\t",a); displayBits(a);

    a=a>>1;
    printf("a=%d\t",a); displayBits(a);

    a=a>>3;
    printf("a=%d\t",a); displayBits(a);

    return 0;
}


void displayBits(int a)
{

  int i;

for(i=sizeof(a)*8 -1 ; i>=0 ; i--)
{
    if(a & (1u<<i))
    printf("1");

    else
    printf("0");

    if(i%8==0)
    printf(" ");

}
printf("\n");

}

/*

cdac@cdac-thinkstation-p330:~/programming/c$ ./p14_2t 
a=7     0000 0000 0000 0000 0000 0000 0000 0111 
a=28    0000 0000 0000 0000 0000 0000 0001 1100 
a=224   0000 0000 0000 0000 0000 0000 1110 0000 
a=112   0000 0000 0000 0000 0000 0000 0111 0000 
a=14    0000 0000 0000 0000 0000 0000 0000 1110 
cdac@cdac-thinkstation-p330:~/programming/c$ gcc -o p14_2t  p14_2t.c 
cdac@cdac-thinkstation-p330:~/programming/c$ ./p14_2t 
a=7     00000000 00000000 00000000 00000111 
a=28    00000000 00000000 00000000 00011100 
a=224   00000000 00000000 00000000 11100000 
a=112   00000000 00000000 00000000 01110000 
a=14    00000000 00000000 00000000 00001110

*/